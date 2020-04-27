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
 
    long long H, L; 
    cin >> H >> L; 
    
    double d = (L*L - H*H) / (2.0*H); 

    cout << setprecision(10) << d ; 
}
