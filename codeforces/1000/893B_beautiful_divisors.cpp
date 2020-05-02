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
    
    ll n, div, ans = 0; 
    cin >> n; 
    ll p = 0; 
    
    while (div <= 100000) {
        div = ((pow(2,p))-1) * (pow(2,p-1));
        p++;
        if (n % div == 0) {
            cout<< n % div ;
            ans = div;
        }
    }

    cout << ans ; 
    return 0; 
}
