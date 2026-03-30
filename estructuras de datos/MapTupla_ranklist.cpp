#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using pii = pair<int, int>;
using pll = pair<long long, long long>;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;
  vector<pll> arre(n);
  map<pair<ll, ll>, ll> mp;

  for (int i = 0; i < n; i++)
  {
    cin >> arre[i].first >> arre[i].second;
  }

  sort(arre.begin(), arre.end(), [](const auto &a, const auto &b){
    if(a.first != b.first){ 
     return a.first > b.first;
    }
    return a.second < b.second; 
  });

   /* for (auto x : arre)
    cout << x.first << " " << x.second << endl;
  */
  for (int i = 0; i < n - 1; i++)
  {
    if (arre[i].first == arre[i + 1].first && arre[i].second == arre[i + 1].second)
    {
      mp[{arre[i].first, arre[i].second}]++;
    }
    else
    {
      mp[{arre[i].first, arre[i].second}]++;
    }
  }
  mp[{arre[n - 1].first, arre[n - 1].second}]++;

  /*  for (const auto &par : mp)
  cout<<par.first.first<<" "<<par.first.second<<" "<<par.second<<endl;
  */
 
  ll ans = mp[{arre[k - 1].first, arre[k - 1].second}];
  cout << ans;
}