#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set> // set and multiset
#include <map> // map and multimap
#include <unordered_set> //unordered set/multiset
#include <unordered_map> // unordered map/multimap
#include <iterator>
#include <algorithm>
#include <numeric>
#include <functional>

void vectorDemo();

using namespace std;

bool f(int x, int y) {
    return x > y;
}

void setDemo();
void vectorDemo();

void print(vector<int> vec) {
//    for (auto i = vec.begin(); i != vec.end(); i++) {
//        cout << *i << " ";
//    }
    for (auto i : vec) {
        cout << i << " ";
    }
}

int main() {
//    vectorDemo();
    setDemo();



    return 0;
}

// Insertion is logn
void setDemo() {
    set<int> s;
    s.insert(3);
    s.insert(4);
    s.insert(1);
    s.insert(5);
    for (auto a : s) {
        cout << a << " ";
    }

    // Iterator if -1 exists, if not, return s.end()
    auto it = s.find(4);
    if (it == s.end()) {
        cout << "not present" << endl ;
    } else {
        cout << "is present" << endl;
        cout << *it << endl;
    }

    auto it2 = s.lower_bound(3);
    auto it3 = s.upper_bound(5);
    cout << "it2: " << *it2 << " it3: " << *it3 << endl;
    cout << *s.begin() << endl;
    cout << *s.end();

}

// Insertion is o(n)
void vectorDemo() {
    vector<int> a = {11, 2, 3, 14, 4};
    cout << a[1] << endl;
//    sort(a.begin(), a.end());
    cout << a[1] << endl;

    bool present = binary_search(a.begin(), a.end(), 14);
    cout << "binary search if 14 exists " << present << endl;

    a.push_back(100);
    a.push_back(100);
    a.push_back(100);
    a.push_back(100);

    // a -> 2, 3, 4, 11, 14, 100, 100, 100, 100

    auto iter = lower_bound(a.begin(), a.end(), 100); // first element
    auto iter2 = upper_bound(a.begin(), a.end(), 100); // >

    cout << *iter << " " << *iter2 << endl;
    cout << iter2 - iter << endl;


    // custom comparator
    sort(a.begin(), a.end(), f);
    print(a);
    cout << endl;

    for (auto &i : a) {
        i++;
    }
    print(a);
    cout << endl;

    for (auto i : a) {
        i++;
    }
    print(a);
}

