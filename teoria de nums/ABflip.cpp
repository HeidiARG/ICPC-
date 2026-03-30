#include <bits/stdc++.h>
using namespace std;

long long obtenMenor(long long productosAElegir, deque<long long> descuentos, deque<long long> preciosProductos){
    deque<long long> temporales;
    for(int i=0; i < productosAElegir; i++){
            temporales.push_back(preciosProductos.front()); 
            cout << "Mayor: " << preciosProductos.front() << "\n";
      preciosProductos.pop_front();
      cout << "Pop: " << preciosProductos.front() << "\n";
      
    }

    sort(temporales.begin(), temporales.end(), greater<long long>());
    cout << "Longiitud: " << temporales.size() << "\n";
    return temporales.back();
    
}

int main(){
  int casos;
  cin >> casos;
  while(casos-- > 0){
    long long productos;
    long long cupones;
    cin >> productos >> cupones;
    deque<long long> descuentos;
    deque<long long> preciosProductos;
    long long total = 0;
    
    for(long long i=0; i < productos; i++){
      long long precio;
      cin >> precio;
      preciosProductos.push_back(precio);
      total += precio;
    }
    
    cout << total << " \n";


    for(long long i=0; i < cupones; i++){
      long long valorCupon;
      cin >> valorCupon;
      descuentos.push_back(valorCupon);
    }
      

    sort(preciosProductos.begin(), preciosProductos.end(), greater<long long>());
    sort(descuentos.begin(), descuentos.end());
    
    for(long long j=0; j < cupones; j++){
      long long productosAElegir = descuentos[j];
      long long n = 0;
      n = obtenMenor(productosAElegir, descuentos, preciosProductos);   
      total -= n; 
      cout << "Resta:" << n << "->" << total << "\n";
      
    }

    cout << total << "\n";
  }
  return 0;
}