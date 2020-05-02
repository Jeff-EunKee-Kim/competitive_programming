#include <math.h>

#include <algorithm>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#define ll long long

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n], c[n], d[n];

    vector<pair<int, int>> v;
    int i;
    for (i = 0; i < n; ++i) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }

    int j, flag = 0;
    for (i = 0; i < n; ++i) {
        flag = 0;
        for (j = 0; j < n; ++j) {
            if (i != j) {
                if (a[i] < a[j] && b[i] < b[j] && c[i] < c[j]) {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 0)
            v.push_back(make_pair(d[i], i + 1));
    }

    sort(v.begin(), v.end());

    cout << v[0].second;

    return 0;
}
