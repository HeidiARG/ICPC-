#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        string s;
        cin >> s;
        // stack<char> stM;
        stack<pair<int, char>> stM;
        stack<pair<int, char>> stm;

        for (int i = 0; i < s.length(); i++)
        {
            if (isupper(s[i]))
            {
                if (!stM.empty() && s[i] == 'B')
                {
                    stM.pop();
                }else
                if (s[i] != 'B')
                {
                   stM.push(pair<int, char>(i, s[i]));

                }
            } else
            if (islower(s[i]))
            {
                if (!stm.empty() && s[i] == 'b')
                {
                    stm.pop();
                }else
                if (s[i] != 'b')
                {
                    stm.push(pair<int, char>(i, s[i]));
                    
                }
                
            }
        }


        stack<pair<int, char>> stmr;
        stack<pair<int, char>> stMR;
        while (!stm.empty())
        {
            stmr.push(stm.top());
            stm.pop();

        }
        while (!stM.empty())
        {
            stMR.push(stM.top());
            stM.pop();
        }
        stM = stMR;
        stm = stmr;
    
        //printf("stm: %d, stM: %d\n", stm.size(), stM.size());
        string s2;
        while ((!stm.empty() && !stM.empty()))
        {
            //printf("Running\n");
            if (stM.top().first < stm.top().first)
            {
                s2.push_back(stM.top().second);
                stM.pop();
            }
            else 
            {
                s2.push_back(stm.top().second);
                stm.pop();
            }
            
        }

        while (!stm.empty())
        {
            s2.push_back(stm.top().second);
            stm.pop();

        }
        while (!stM.empty())
        {
            s2.push_back(stM.top().second);
            stM.pop();
        }
        
        

        cout << s2<<endl;

        // for(int i = 0; i < s.length(); i++){
        //   cout<<s[i];
        //}
    }
    return 0;
}