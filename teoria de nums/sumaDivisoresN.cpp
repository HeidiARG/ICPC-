#include <bits/stdc++.h>
using namespace std;

void sum_divisors(vector<long long> &sigma, int n){
    sigma.assign(n+1,0);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j+=i)
        {
           sigma[j]+= i;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> sigma(n+1);

    sum_divisors(sigma,n);

    for(int i=1;i<=n;i++)
    cout<<sigma[i]<<" ";
    
    return 0;
}