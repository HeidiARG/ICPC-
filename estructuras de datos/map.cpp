#include <bits/stdc++.h>
using namespace std;

int main() {//map key|value
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    map<string, int> m;
    unordered_map<int,int> mp;

      int n;
      cin >> n;
     

    for(int i = 0; i < n; i++){
        int key, value;
        cin >> key >> value;
        mp[key] = value;
    }//lee

    for(auto par : mp){
    cout << par.first << " " << par.second << endl;
    }

    for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    mp[x]++;
    }//freq
    set<string> palabras;

    int n2;
    cin >> n2;

    while(n2--){
        string s;
        cin >> s;
        palabras.insert(s);
    }
   
      
}