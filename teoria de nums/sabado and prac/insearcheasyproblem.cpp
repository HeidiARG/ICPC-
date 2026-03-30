#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using pii = pair<int, int>;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

      ll n;
      cin >> n;
      vector<int> arre(n);

      for(int i = 1; i < n; i++){
          cin >> arre[i];
      }
      sort(arre.begin(),arre.end());
      bool ans = true;

      for (int i = 1; i < n; i++)
      {
       if(arre[i] != i){
        cout<<i;
        ans =false;
        break;
       }
       
      }

      if(ans)
        cout<<n;
      

    return 0;
}