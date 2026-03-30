#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    vector<long long> arre(n);
    long long coun = 0;
    long long x = 0;
    for (long long i = 0; i < n; i++)
    {
        cin >> arre[i];
        x += arre[i];
    }
    sort(arre.begin(), arre.end());

    
    int i = 0; // inicio
    int j = arre.size() - 1;


    while (i <= j) { //dos punteros
    if(arre[i] + arre[j] < 4) {
        coun++;
    i++; 
    j--;
    }
    else{
        coun++;
        j--;

    }
    }
    cout << coun;

    return 0;
}