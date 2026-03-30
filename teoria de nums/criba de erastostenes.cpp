#include <bits/stdc++.h>
using namespace std; // Criba de Eratóstenes
// Lista de nums muestra cuales si y cuales no son primos

void sieve_of_erastostenes(vector<bool> &is_prime, int n)
{
    is_prime.assign(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (is_prime[i])
            for (int j = i * i; j <= n; j += i)
            {
                is_prime[j] = false; // tacha los multiplos de los primos
            }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<bool> is_prime(n);
    vector<int> arre(n + 1);
    iota(arre.begin(), arre.end(), 0);

    sieve_of_erastostenes(is_prime, n);

    for (int x : arre)
        cout <<"|"<< x;
    cout << "\n";
    for (int x : is_prime)
        cout <<"|"<< x;

    return 0;
}