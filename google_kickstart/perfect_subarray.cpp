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

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t, n, curr; 
    cin >> t; 

// For each test
    for (int i = 0; i < t; i++) {
        cin >> n; 

        vector<int> prefixCount(2*n*100+1);
        long long ans = 0; 
        for (int j = 0; j < n; j++) {
            cin >> curr;
            sum += curr; 
            for (int k = 0; k*k <= sum; k++) {
                ans += prefixCount[sum - k*k];
            }
            prefixCount[sum]++;
        }
        cout << "Case #" << i+1 << ": " << ans << "\n"; 
    }
    
     
}

