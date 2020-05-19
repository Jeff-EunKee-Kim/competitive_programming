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
int total; 
bool isPerfectSquare(int n) {
    if (n < 0) return false; 
    long double sr = sqrt(n); 
    
    return (sr - floor(sr) == 0);
}

void findPerfectSubarrays(vector<int>& prefixSum) {
    // cout << "Prefix sum is: ";
    // for (int i =0; i < prefixSum.size(); i++) {
    //     cout << prefixSum[i]; 
    // }
    
    for (int i = 0; i < prefixSum.size()-1; i++) {
        for (int j = i+1; j< prefixSum.size(); j++) {
            if (isPerfectSquare(prefixSum[j] - prefixSum[i])) {
                total ++; 
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t, n, temp; 
    cin >> t; 
    for (int i = 0; i < t; i++) {
        cin >> n; 
        vector<int> prefixSum(n); 
        total = 0; 
        int sum = 0; 
        for (int j = 0; j < n; j++) {
            cin >> temp; 
            sum += temp; 
            prefixSum[j] = sum;
            if (isPerfectSquare(sum)) {
                total ++; 
            }
        }
        findPerfectSubarrays(prefixSum); 
        cout << "Case #" << i+1 << ": " << total << "\n"; 
    }
    
     
}

