#include <bits/stdc++.h>
using namespace std;

int main() { // SET 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   
    set<int> s;
    multiset<int> ms;
    unordered_set<int> s;
    
    s.insert(10);
    s.erase(10);
    ms.erase(ms.find(10));
    
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }

    for(int x : s){//imprime
    cout << x << " ";
    }
    
    int x = 5;//busca
    if(s.find(x) != s.end()){
        cout << "Existe\n";
    }
    
    if(!s.empty()){
        cout <<"menor"<<*s.begin() << "\n";
    }
    
    if(!s.empty()){
        cout <<"max"<<*prev(s.end()) << "\n";
    }

    auto it1 = s.lower_bound(x);    // -> primer elemento <= x

    auto it2 = s.upper_bound(x);    // -> primer elemento > x
       


    vector<int> v = {1,3,5,7,9};    // BINARY SEARCH en vector, (vector ordenado)
    if(binary_search(v.begin(), v.end(), x)){
        cout << "Existe en vector\n";
    }

    auto it = lower_bound(v.begin(), v.end(), x); //lower_bound(x) devuelve el primer elemento <= x
    if(it != v.end() && *it == x){
        cout << "Encontrado: " << *it << "\n";
        cout << "Indice: " << it - v.begin() << "\n";
    }
    else{
        cout << "No encontrado\n";
    }

                                                    // SLIDING WINDOW + SET substring sin repetir
    string str = "abcabcbb";
    set<char> s2;

    int l = 0;
    int mejor = 0;

    for(int r = 0; r < str.size(); r++){

        // mientras haya repetidos
        while(s2.count(str[r])){
            s2.erase(str[l]);
            l++;
        }

        s2.insert(str[r]);
        //actualiza
        mejor = max(mejor, r - l + 1);
    }

    cout << "Mayor ventana: " << mejor << "\n";

    return 0;
}
