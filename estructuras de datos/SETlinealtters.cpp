#include <bits/stdc++.h>
using namespace std; //SET y string

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string linea;
    //cin.ignore(); limpia salto de linea
    // stringstream ss(linea); 
    getline(cin, linea);
        
      set<char> s;
     
        for(char c : linea){
            if(isalpha(c)) s.insert(c);//es caracter?
        }
        int num=0;
        for(char x : s){
            num++;
        //cout << x << " ";
        }
        cout << num << " ";

   
}