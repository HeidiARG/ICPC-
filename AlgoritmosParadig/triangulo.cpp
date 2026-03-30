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

    sort(arre.begin(), arre.end());

    for (int i = 0; i < n - 2; i++)
    {
        if (arre[i] + arre[i + 1] > arre[i + 2])
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}