#include<iostream>
#include<stack>

using namespace std;
int main(){

    stack<int> st;
    stack<char> stc;

    //insertar
    st.push(1);
    st.push(2);

    //ver el ultimo en pila
    cout << st.top() << endl;

    string s; 
    s.length();
    st.pop(); //sacar
    cout << st.top() << endl;
    cout << st.empty() << endl;
    cout << st.size() << endl;
 
    int n = st.size();
    for (int i = 0; i < n; i++)
    {
        cout << st.top() << endl;
        st.pop();
    }

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

// imprime, pero solo destruye la copia
    stack<int> copia = st;

    while(!copia.empty()){
        cout << copia.top() << " ";
        copia.pop();
    }


//for(...) 
//    while(!st.empty() && condicion){
//        st.pop();
//    }
//    st.push(valor);


}