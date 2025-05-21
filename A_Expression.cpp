// https://codeforces.com/problemset/problem/479/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll a,b,c;
    cin>>a>>b>>c;
 
   ll x1 = a+b*c;
   ll x2 = a*(b+c);
   ll x3 = a*b*c;
   ll x4 = (a+b)*c;
   ll x5 = a+b+c;
   ll x6 = a*b+c;
   ll v[6]={x1,x2,x3,x4,x5,x6};
    sort(v,v+6);
    cout<<v[5]<<endl;
    return 0;
}