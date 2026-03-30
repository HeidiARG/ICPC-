#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000000;
    vector<long long> divisores(MAX + 1);
    void cribaDivisores()
    {
        for (int i = 1; i <= MAX; i++)
        {
            for (int j = i; j <= MAX; j += i)
            {
                divisores[j]++;
            }
        }
    }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cribaDivisores();

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        cout << divisores[n] << "\n";
    }
}