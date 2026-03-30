#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;  
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    for(int x:v){
        cout<<x<<endl;
    }

    reverse(v.begin(), v.end());
    
    int max=v[0];
    int min=v[0]; 
    for(int i = 0; i < n-1; i++){
        if(v[i+1]>max){
            max = v[i+1];
        }
        if(v[i+1]<min){
            min = v [i+1];
        }
    }
            cout<<max<<endl;
            cout<<min<<endl;
     //prefix sum
     vector<int> prefix(n);
     prefix[0]=v[0];

     for (int i = 1; i < v.size(); i++)
     {
        prefix[i] = prefix[i-1] + v[i];
     }
     




}