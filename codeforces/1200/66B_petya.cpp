#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n; 
    int input; 

    vector<int> vec;
    for (int i = 0; i<n; i++) {
        cin >> input; 
        vec.push_back(input);
    }

    int maxSection = 1; 
    for (int i = 0; i< n; i++) {
        int currentMax = 1; 
        int left = i; 
        int right = i; 

        while (left >= 1 && vec[left-1] <= vec[left]) {
            currentMax++; 
            left--;
        }
        while (right <n-1 && vec[right+1] <= vec[right]) {
            currentMax++; 
            right++; 
        }
        maxSection = max(maxSection, currentMax); 
    }

    cout << maxSection;
}

