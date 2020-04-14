#include <algorithm>
#include <deque>
#include <functional>
#include <iostream>
#include <iterator>
#include <list>
#include <map>  // map and multimap
#include <numeric>
#include <set>            // set and multiset
#include <unordered_map>  // unordered map/multimap
#include <unordered_set>  //unordered set/multiset
#include <vector>

using namespace std;

void setDemo();
void vectorDemo();
void mapDemo();
void problemDemo();

class Node {
    public:
        int data;
        Node * next;
        Node(int val) {
            data = val; 
        }
};

int main() {
    int num = 3; 
    int *pNum = &num; 

    cout << num << endl;
    cout << pNum << endl; 
    cout << *pNum << endl; 



    // Node *head = NULL;
    // Node *second = NULL;
    // Node *third = NULL;

    // head = new Node(3);
    // head-> next = second; 

    // while (head != NULL) {
    //     cout << head->data << " ";
    //     head = head->next;
    // }


    // vectorDemo();
    // setDemo();
    // mapDemo();
    // problemDemo();


    
    return 0;
}

// given intervals, find the interval that a certain number n exists
void problemDemo() {
    set<pair<int, int> > s;
    s.insert({10, 20});
    s.insert({2, 3});
    s.insert({30, 400});
    s.insert({401, 450});

    int n = 31;

    auto it = s.upper_bound({n, INT_MAX});
    it--;
    pair<int, int> current = *it;
    if (current.first <= n && n <= current.second) {
        cout << "Found: " << n;
    }
}

void mapDemo() {
    map<int, int> a;
    a[1] = 100;
    a[2] = 2000;
    a[3] = 400;
    a[101010] = 30;

    map<char, int> b;
    string x = "hmm";
    for (char c : x) {
        cout << c << " ";
        b[c]++;
    }
    cout << b['m'] << endl;
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
        cout << "not present" << endl;
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

void print(vector<int> vec) {
    //    for (auto i = vec.begin(); i != vec.end(); i++) {
    //        cout << *i << " ";
    //    }
    for (auto i : vec) {
        cout << i << " ";
    }
}
bool f(int x, int y) {
    return x > y;
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

    auto iter = lower_bound(a.begin(), a.end(), 100);   // first element
    auto iter2 = upper_bound(a.begin(), a.end(), 100);  // >

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
