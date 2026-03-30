#include <bits/stdc++.h>
using namespace std;

//const int MAX = 1000000;
 //   vector<long long> divisores(MAX + 1);
//  void cribaDivisores()
 //   {
   //     for (int i = 1; i <= MAX; i++)
     //   {
       //     for (int j = i; j <= MAX; j += i)
         //   {
           //     divisores[j]++;
  //          }
    //    }
   // }


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    
      int n;
      cin >> n;
      vector<int> arre(n);
      set<int> s;
      set<int> s2;


      //cribaDivisores();

      
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    int count=s.size();

      //for(int x:s) cout<<x;

      while (count--)
      {
       int i = 1;
       for (int x: s)
        {
        if(x%i==0){
        //cout << x << " ";
        cout << i << " ";
         continue;
         }
         else{
         i++;
         break;   
         }
        s2.insert(i); 
        }
      }
      
    for(int x : s2){//imprime
    cout << x << " ";
    }
        

    return 0;
}