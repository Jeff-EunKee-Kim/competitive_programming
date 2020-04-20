#include <vector>
using namespace std;

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
     int sum1 =0 , sum2=0, sum3=0; 
    for(int h: h1) sum1 += h; 
    for(int h: h2) sum2 += h; 
    for(int h: h3) sum3 += h; 

    reverse(h1.begin(), h1.end()); 
    reverse(h2.begin(), h2.end()); 
    reverse(h3.begin(), h3.end()); 

    while (sum1 != sum2 || sum2 != sum3) {
        if (sum1 >= sum2 && sum1 >= sum3) {
            sum1 -= h1.back(); 
            h1.pop_back();
        } else if (sum2 >= sum1 && sum2 >= sum3) {
            sum2 -= h2.back(); 
            h2.pop_back(); 
        } else {
            sum3 -= h3.back(); 
            h3.pop_back(); 
        }
    } 

    return sum1; 

}