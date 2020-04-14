#include <iostream>
#include <vector> 
#include <map> 
#include <algorithm>
using namespace std;

int main() {
    int t, n, maxTeam;
    cin >> t; 
    while (t > 0) {
        cin >> n; 
        maxTeam = 0; 

        map <int, int> skillMap;
        int skill; 
        for (int i = 0; i < n; i++) {
            cin >> skill; 
            skillMap[skill]++; 
            maxTeam = max(maxTeam, skillMap[skill]); 
        }
        int differentSkillTeam = skillMap.size() - 1; 
        int sameSkillTeam = maxTeam; 
        maxTeam = min(maxTeam, differentSkillTeam); 
        if (sameSkillTeam - differentSkillTeam > 1) {
            maxTeam ++; 
        }
        cout << maxTeam << endl;; 
        t--;
    }
}
