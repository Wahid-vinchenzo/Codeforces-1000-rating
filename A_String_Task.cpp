//https://codeforces.com/problemset/problem/118/A
#include <iostream>
using namespace std;
#define ll long long
int main() {
    string s,a="";
    cin>>s;
    for(auto c:s){
       c=tolower(c);
       if(c!='a'&& c!='e'&& c!='i'&& c!='o' && c!='u'&& c!='y')
       a+=c;
    }
    
    for(auto c:a)
    {
        cout<<"."<<c;
    }
    cout<<endl;
    return 0;
}