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

    int n, len, t;
    cin >> n; 

    for (int i = 0; i < n; i++) {
        cin >> len;
        unordered_set<int> us;
        for (int j = 0; j < len; j++) {
            cin >> t; 
            us.insert(t);
        }
        cout << us.size() << "\n";
    }
}

