#include <bits/stdc++.h>
using namespace std;

long long cuentaDivisores(long long n)
{
    long long cnt = 1;

    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0) // i primo
        {
            int power = 0;
            while (n % i == 0)
            {
                n /= i;
                power++; // exp de i
            }
            cnt *= (power + 1); //(num de opciones 0,1,2..) muitiplica
        }
    }

    if (n > 1)
        cnt *= 2;

    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testcases;
    cin >> testcases;
    long long n;

    while (testcases--)
    {
        cin >> n;
        cout << cuentaDivisores(n) << endl;
        
    }
    return 0;
}