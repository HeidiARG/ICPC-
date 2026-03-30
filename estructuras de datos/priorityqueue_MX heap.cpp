#include <bits/stdc++.h>
using namespace std;

int main() { //MaxHeap
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //inicializar desde array
    vector<int> arr={10, 5, 20};
    priority_queue<int> pq(arr.begin(), arr.end()); 

    queue<int> q;
    priority_queue<int> pq; //MAX

    pq.push(5);
    pq.push(8);//de mayor a menor 8|5|1
    pq.push(1);

    q.front();
    q.pop();
    pq = priority_queue<int>();//vaciar
    cout << pq.top(); // 8

    queue<int> copia = q;//imprim
    while(!copia.empty()){
        cout << copia.front() << " ";
         copia.pop();
    }

    //Min Heap en C++ de menor a mayor!
    priority_queue<int, vector<int>, greater<int>> pq;

    //Dijkstra (min Heap con pares) de menor a mayor!
    //Ordena primero por .first, luego por .second
    priority_queue<pair<int,int>, 
               vector<pair<int,int>>, 
               greater<pair<int,int>>> pq;

    /* //entrada
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            q.push({x, (y - x) + 2});
        }

        queue<pair<int, int>> copia = q; // imprim
        while (!copia.empty())
        {
            cout << copia.front().first << " " << copia.front().second << " ";
            copia.pop();
        }
    */

}
 //reversa hasta k
queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        stack<int> st;
        queue<int> copia;//imprim
        
        if(k > q.size()) return q;
        while(k--){
            st.push(q.front());
        //cout << copia.front() << " ";
            q.pop();
        }
        
        while(!st.empty()){//siempre revisa que no este vacio
            copia.push(st.top());
            st.pop();
        }
        
        while(!q.empty()){
        copia.push(q.front());
        q.pop();
        }
        
       return copia;
        
    }