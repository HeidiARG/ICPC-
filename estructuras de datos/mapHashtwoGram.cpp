#include <bits/stdc++.h>
using namespace std;

int main() //unordered_map
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;

    unordered_map<string, int> mp;

    for (int i = 0; i + 1 < s.size(); i++)
    {
        string par = s.substr(i, 2);
        mp[par]++;
        //cout << s.substr(i, 2) << "  " << mp[par] << " veces\n";
    }
    int max = 0;
    string mas_frecuente;
    for (auto par : mp)
    {
        if (par.second > max)
        {
            max = par.second;
            mas_frecuente = par.first;
        }
    }

    cout << mas_frecuente << "\n";
    //cout << max << "\n";
}