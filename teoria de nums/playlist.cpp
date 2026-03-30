#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arre(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arre[i];
    }
    
    int contador = 0;
    set<int> conjunto;
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        while (conjunto.find(arre[j]) != conjunto.end())
        {
            conjunto.erase(arre[i]);
            i++;
        }
        conjunto.insert(arre[j]);
        contador = max(contador, j - i + 1);
    }

    cout << contador;
}
