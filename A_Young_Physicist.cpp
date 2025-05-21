//https://codeforces.com/problemset/problem/69/A

#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int n;
    cin >> n ;
 
    vector<vector<int>> v(n, vector<int>(3));
 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> v[i][j];
        }
    }
 
    // Now you can use the 2D vector 'v'
    // For example, to print the elements:
    // for (int i = 0; i < n; ++i) {
    //     for (int j = 0; j < m; ++j) {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }
int sum0=0;
for(int i=0;i<n;i++){
sum0+=v[i][0];
}
int sum1=0;
for(int i=0;i<n;i++){
sum1+=v[i][1];
}
int sum2=0;
for(int i=0;i<n;i++){
sum2+=v[i][2];
}
if(sum0==0 && sum1==0 && sum2==0)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
return 0;
}