  #include <bits/stdc++.h>
    using namespace std;
     
    using ll   = long long;
    using ull  = unsigned long long;
    using pii  = pair<int,int>;
    using vi   = vector<int>;
    using vll  = vector<ll>;
     
    #define all(x)      (x).begin(), (x).end()
    #define sz(x)       (x).size()
    #define pb          push_back
    #define mp          make_pair
    const int N = 1e5 + 9;
 
 
     bool cmp (pair<ll,ll>uno, pair<ll,ll>dos){
        return uno.second < dos.second;
     }
 
    void solve() {
        long n; 
        long long time;
        cin >> n >> time;
        vector<pair<ll, ll>> p(n);
        for(int i = 0; i < n; i++){
            cin >> p[i].first >> p[i].second;
        }
        sort(p.begin(),p.end());
        ll ans = 0ll;
        /* for(int i = 0; i < sz(p); i++){
            cout << p[i].first << " " << p[i].second; 
            cout << endl;
        } */
        //ans = p[0]. first;
        for(int i=1; i < n; i++){
            ans = max((p[i].first - p[i-1].second), ans);
        }
        //cout << time - p[sz(p) - 1].second << endl;
        ans = max(ans, (time - p[sz(p) - 1].second));
        cout << ans << endl;
    }
     
    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
     
        int T = 1;
        //cin >> T;
        while (T--) {
            solve();
            
        }
        return 0;
    }