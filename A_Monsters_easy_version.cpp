#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n; cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    int ans=0;
    ans+=a[0]-1;
    int reduce_to=2;
    
    for(int i=1;i<n;i++){
if(reduce_to > a[i])
continue;
ans+=a[i]-reduce_to;
reduce_to++;

    }
cout<<ans<<endl;


}


int main(){
int t; cin>>t;
while(t--)
solve();    
}