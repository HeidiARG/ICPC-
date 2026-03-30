#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 9;
    vector<int> arre(n);

    iota(arre.begin(), arre.end(), 1); // enumera de 1 a n

    reverse(arre.begin(), arre.end()); // reversa del vector

    for (int i = n - 1; i >= 0; i--)
    { // imprime en reversa
        cout << arre[i] << " ";
    }

    auto it = find(arre.begin(), arre.end(), 7); // busca elemento y lo devuelve (NO necesita orden)
    if (it != arre.end())
    {
        cout << "\nExiste";
        cout << " " << *it << endl;
    }

    vector<int> v = {4, 7, 2, 9};
    int x = 7;
    if (find(v.begin(), v.end(), x) != v.end()){ // si resultado != no encontrado → sí existe
        cout << "Si esta\n";
    }
    else{
        cout << "No esta\n";
    }

     // LOWER_BOUND (vector ordenado menor a MAX) 
    vector<int> ord = {1,3,3,5,7,9};
     x = 3;

    // Primer número >= x
    auto it2 = lower_bound(ord.begin(), ord.end(), x);

    if (it2 != ord.end()) {
        cout << "Primer >= " << x << " es " << *it2 << "\n";
        cout << "Posicion: " << (it2 - ord.begin()) << "\n";
    }

    // Cuántos números >= x
    int cantidad = ord.end() - lower_bound(ord.begin(), ord.end(), x);
    cout << "Cantidad >= x: " << cantidad << "\n";


    //NO necesitan orden

    // Borrar una aparición
    auto it3 = find(ord.begin(), ord.end(), 5); 
    if (it3 != ord.end()) {
        ord.erase(it3);
    }

    // Borrar todos los 3
    ord.erase(remove(ord.begin(), ord.end(), 3), ord.end());

    // Borrar rango (pos 1 a 3)
    vector<int> v2 = {1,2,3,4,5,6};
    v2.erase(v2.begin()+1, v2.begin()+4);

    //OPERACIONES

    // Suma total
    long long suma = accumulate(v.begin(), v.end(), 0LL);

    // Máximo y mínimo
    int mx = *max_element(v.begin(), v.end());
    int mn = *min_element(v.begin(), v.end());

    // Contar ocurrencias
    int c = count(v.begin(), v.end(), 7);
            
}