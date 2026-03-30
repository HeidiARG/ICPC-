#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    
      string s;
      cin >> s;
      int contador=0;

        int n = s.length();

        set<char>::iterator it;
        set <char> conjunto;
        
        int l = 0; //puntero inicio
        for (int r = 0; r < n; r++){ //dos punteros r puntero 2
           while(conjunto.find(s[r])!=conjunto.end()){ //si el caracter está repetido
                conjunto.erase(s[l]);
                l++;
           } 
                conjunto.insert(s[r]);
                contador = max(contador, r - l + 1);
                   
        }
        cout<< contador;
    
}