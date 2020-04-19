#include <iostream>
#include <vector>

using namespace std; 

int main() {
    int d, n; 
    cin >> d >> n; 
    vector<int> a;

    
    int rotation = d % n; 
    int answer[n]; 
    for (int i = 0; i< n; i++) {
        if (i - rotation < 0) {
            answer[i-rotation + n] = a[i]; 
        } else {
            answer[i-rotation] = a[i];
        }
    }
    for (int i : answer) {
        cout << i << " "; 
    }
}