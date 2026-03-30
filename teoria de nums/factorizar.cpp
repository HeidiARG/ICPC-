#include <bits/stdc++.h>
using namespace std;
//Contar divisores
//Suma de divisores
//Ver propiedades multiplicativas
void fact(vector<long long> &f, int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            f.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
        f.push_back(n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> f;

    fact(f, n);

    for (int x : f)
        cout <<"|"<< x;

    return 0;
}