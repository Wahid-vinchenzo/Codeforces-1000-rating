// https://codeforces.com/problemset/problem/122/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
  vector<int> v={4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744,747, 774, 777};
  for(auto a:v){
      if(n%a==0){
          cout<<"YES"<<endl;
          return 0;
          
      }
  }
  cout<<"NO"<<endl;
 
   return 0; 
}