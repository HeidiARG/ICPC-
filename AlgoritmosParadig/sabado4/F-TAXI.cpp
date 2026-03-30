#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()
#define sz(x) (x).size()
#define pb push_back
#define mp make_pair
const int N = 1e5 + 9;

void solve()
{
    long long n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(all(a));
    int i = 0;
    int j = n - 1;
    int ans = 0;
    int actual = 0;
    int resto =0;
    while (i <= j)
    {
        actual = a[i] + a[j];
        if (actual > 4)
        {
            resto = 7%4;
            j--;
            ans++;
            actual = 0;
        }
        else
        {
            if (actual == 4)
            {
                i++;
                j--;
                ans++;
                actual = 0;
            }
            if (actual < 4)
            {
                actual -= a[j];
                i++;
                if (i == j)
                {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}