#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr, int target) {
    int l = 0;
    int r = arr.size() - 1; 
    while (l <= r) { 
            int m = l + (r - l) / 2; 
    
            if (arr[m] == target) {
                return m; 
            } else if (arr[m] < target) {
                l = m + 1; 
            } else {
                r = m - 1; 
            }
        } 
    return -1; 
}

int main() {
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 8 ;

    bool exists = binarySearch(arr, target);

    cout << exists << endl; 
}