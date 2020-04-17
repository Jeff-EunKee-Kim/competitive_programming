#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;

int main() {
    int n, house;
    cin >> n >> house; 
    int input; 

    vector<int> cities ;
    for (int i = 0; i< n; i++) {
        cin >> input; 
        cities.push_back(input); 
    }

    int criminals = 0; 
    if (cities[house-1] == 1) {
        criminals ++; 
    }

    int left = house -2; 
    int right = house; 

    while (left >= 0 && right < n) {
        if (cities[left] == cities[right] && cities[left] == 1) {
            criminals +=2;
        } 
        left--;
        right++; 
    }

    if (left == -1) {
        while (right < n) {
            if(cities[right] == 1) {
                criminals ++; 
            }
            right++; 
        }
    } else if (right == n) {
        while (left >= 0) {
            if(cities[left] == 1) {
                criminals ++; 
            }
            left --; 
        }
    } 
    cout << criminals; 
}
