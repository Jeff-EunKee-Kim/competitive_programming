#include <iostream>
#include <set> 
using namespace std;

int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    set<int> horseshoes;

    horseshoes.insert(a); 
    horseshoes.insert(b); 
    horseshoes.insert(c); 
    horseshoes.insert(d); 

    cout << 4 - horseshoes.size();
}