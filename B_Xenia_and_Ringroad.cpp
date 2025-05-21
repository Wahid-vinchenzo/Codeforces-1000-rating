// https://codeforces.com/problemset/problem/339/B

#include <iostream>
#include <vector>
#define ll long long
using namespace std;
 
int main() {
    ll n, m;
    cin >> n >> m;
 
    vector<int> v(m);
 
   
    for (int i = 0; i < m; i++) 
        cin >> v[i];
    
 
    ll sum = v[0]-1;
 
    for (int i = 0; i < m-1 ; i++) {  
        if (v[i] > v[i + 1]) 
            sum +=n- (v[i]-v[i+1]);  
        
        else 
            sum += v[i+1]-v[i];  
        
    }
 
   
    cout << sum << endl;
 
    return 0;
}