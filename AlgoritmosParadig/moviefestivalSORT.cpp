#include <bits/stdc++.h>
using pii = pair<int, int>;

using namespace std;
  bool cmp(pair<int,int>uno, pair<int,int>dos){
        return uno.second<dos.second;
       } 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    
      int n;
      cin >> n;
      int co=0;

      vector<pair<int,int>> arre(n);
      vector<pii> arre2(n);

      for(int i = 0; i < n; i++){
          cin >> arre[i].first>>arre[i].second;
      }
      
       sort(arre.begin(),arre.end(),cmp);

        //for (const auto& p : arre)
        //cout<< p.first << p.second << '\n';
        int end=0;
        //for(int i = 0; i < n-1; i++){
        for (auto& c : arre){ 
            if(c.first>=end){ 
                end = c.second;
                co++;
            }
        }
                cout<< co << '\n';

}