#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        ll n;
        cin >> n;
        map<ll, pll> mp;
        // cout<<n/2<<endl;
        ll mx = 1;

        for (ll i = 1; i * i <= n; i++)
        {
            // ll x = lcm(i,(n - i));
            // mp[x] = {(n - i),i};
            if (n % i == 0)
            {
                if (i < n)
                    mx = max(mx, i);
                if (n / i < n)
                    mx = max(mx, n / i);
            }
        }
        cout << mx << " " << n - mx << endl;

        // cout<<mp.begin()->second.first<<" "<<mp.begin()->second.second<<"\n";
    }

    return 0;
}