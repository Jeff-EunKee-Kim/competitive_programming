#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <iomanip>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll n,div = 0; 
    cin >> n; 
    ll p = 1;
    ll ans = 1;  
    
    while (div <= 100000) {
        div = ((2<<p) - 1) * (2<<(p-1));
        // cout << div << endl; 
        p++;
        if (n >= div && n % div == 0) {
            ans = div;
        }
    }
    
    cout << ans ; 
    return 0; 
}
