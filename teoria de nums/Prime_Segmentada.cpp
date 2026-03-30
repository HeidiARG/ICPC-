#include <bits/stdc++.h>
using namespace std; //[L,R] solo hasta raiz de R
// Encontrar primos entre:100y120


// Genera primos hasta sqrt(R)
void simpleSieve(long long limit, vector<int>& primes) {

    vector<bool> is_prime(limit + 1, true);

    for (long long i = 2; i <= limit; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (long long j = i * i; j <= limit; j += i)
                is_prime[j] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long L, R;
    cin >> L >> R;

    long long limit = sqrt(R);
    vector<int> primes;
    simpleSieve(limit, primes);

    // segmento
    vector<bool> isPrime(R - L + 1, true);

    for (int p : primes)
    {
        long long start = max(1LL * p * p, ((L + p - 1) / p) * 1LL * p); //Para hacer ceiling usamos

        for (long long j = start; j <= R; j += p)
            isPrime[j - L] = false; // marcar múltiplos
    }

    //Caso si L = 1
    if (L == 1)
        isPrime[0] = false;

    //Imprimir primos de L a R
    for (long long i = L; i <= R; i++)
    {
        if (isPrime[i - L])
            cout << i << "\n";
    }
}