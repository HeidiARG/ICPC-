#include <bits/stdc++.h>
using namespace std;

bool esPrimo(int n)
{
    if (n < 0)
        n *= -1;
    if (n == 2)
        return true;
    if (n == 1 or n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool esPrimo2(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    cout << esPrimo(a) << endl;
    cout << esPrimo2(a);

    return 0;
}