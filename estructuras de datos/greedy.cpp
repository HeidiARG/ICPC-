#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    vector<int> v;



//sort(v.begin(), v.end()); plantilla
//for(auto x : v){
//    if(se_puede_tomar(x)){
//        tomar(x);
//    }
//}


// G INTERVALOS
vector<pair<int,int>> intervals = {
    {1,3},
    {2,5},
    {4,6}
};

// ordenar por second
sort(intervals.begin(), intervals.end(),
     [](pair<int,int> a, pair<int,int> b){
         return a.second < b.second;
     });

int fin_actual = -1;
int contador = 0;

for(auto intervalo : intervals){
    if(intervalo.first >= fin_actual){
        contador++;
        fin_actual = intervalo.second;
    }
}

cout << contador << endl;


// G CON PARES
// (emparejar números)
sort(v.begin(), v.end());

for(int i = 0; i < n-1; i++){
    // comparar vecinos
}


sort(v.rbegin(), v.rend()); // mayor a menor

for(auto x : v){
    // tomar primero los grandes
}


// G PRIORITY QUEUE
priority_queue<int> pq;

pq.push(x);

while(!pq.empty()){
    int mejor = pq.top();
    pq.pop();
}

// G MINIMIZAR COSTO
sort(v.begin(), v.end());

long long costo = 0;

for(auto x : v){
    costo += x;
}


//sort(v.begin(), v.end());  -> patron de diseño
//int respuesta = 0;
//for(auto x : v){
//   if(condicion){
//        respuesta++;
//    }
//}
}