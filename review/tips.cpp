#include <vector>;
#include <iostream>; 

using namespace std; 

typedef long long ll; 
typedef vector<int> vi;

#define F first
#define S second
#define PB push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)

int main() {
    vi v ; 
    v.PB(3); 
    /**
     * vector<int> v ;
     * v.push_back(3);
     */
    int n = 3; 

    for (int i = 1; i <= n; i++) {
        cout << i << "\n";
    }
    REP(i, 1, n) {
        cout << i << "\n"; 
    }
}
