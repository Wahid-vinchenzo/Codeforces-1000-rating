// https://codeforces.com/problemset/problem/230/A

#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
struct Dragon {
    int strength;
    int bonus;
};
 
 
bool compareDragons(const Dragon &a, const Dragon &b) {
    return a.strength < b.strength;
}
 
int main() {
    int initialStrength ;
    int n; 
    cin >>initialStrength>>n;
 
    vector<Dragon> dragons(n);
    
    
    for (int i = 0; i < n; i++) {
        cin >> dragons[i].strength >> dragons[i].bonus;
    }
 
    sort(dragons.begin(), dragons.end(), compareDragons);
 
 
    int kiritoStrength = initialStrength;
 
 
    for (const Dragon &dragon : dragons) {
        if (kiritoStrength > dragon.strength) {
          
            kiritoStrength += dragon.bonus;
        } else {
           
            cout << "NO" << endl;
            return 0;
        }
    }
 
  
    cout << "YES" << endl;
    return 0;
}