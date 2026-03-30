#include <bits/stdc++.h>
#include <numeric>//min comun (todos los nums prmos de ambos numeros mutiplicados)
using namespace std;

long long lcm2(long long a, long long b){
    return (a / gcd(a,b)) * b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a,b;
    cin >> a>>b;
    cout<<lcm(a,b)<<" ";
    cout<<lcm2(a,b);


    return 0;
}