#include <bits/stdc++.h>
using namespace std;//Criba de euler (te da nums primos)
// n<= 10⁷
//te da el menor factor primo de cada número
//Cuando necesitas factorizar muchos números rápido
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> lowprime(n + 1);
    vector<int> primos;

    for (int i = 2; i <= n; i++)
    {
        if (lowprime[i] == 0)//es primo
        {
            lowprime[i] = i;
            primos.push_back(i);//vector de factores primos de n
        }

        for (int p : primos)
        {
            if (p > lowprime[i] || i * p > n)
                break;
            lowprime[i * p] = p;//Ahora marcamos múltiplos
        }
    }

    for (int x : primos) //imprime los num primos
        cout <<"|"<< x;
    cout << "\n";
    for (int x : lowprime) //imprime el menor factor primo de cada numero hasta n
        cout <<"|"<< x;


    while(n > 1){
    cout <<"\n"<< lowprime[n] << " "; // te dice la factorizacion en nums primos de ese num
    n /= lowprime[n];
    }

    return 0;
}