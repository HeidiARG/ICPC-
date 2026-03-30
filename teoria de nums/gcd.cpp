#include <bits/stdc++.h>
using namespace std; // Alg de Euclides creacion de gcd
// Calcula el max comun divisor (MCD)
// MCD (28, 42) = 2x7 = 14

int gcd2(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    int g = gcd(a, b);
    int g2 = gcd2(a, b);

    cout << g << " " << g2;

    return 0;
}