//https://codeforces.com/problemset/problem/131/A

#include <iostream>
using namespace std;
 #define ll long long
int main()
{
    string s;
    cin>>s;
    bool istrue = true;
 
    for(ll i=1;i<s.length();i++)
    {
        if(s[i] >=97)
        {
            istrue = false;
            break;
        }
    }
 
    if(istrue)
    {
        for(ll i=0;i<s.length();i++)
        {
            if(s[i]>=97)
                s[i] = s[i]-32;
            else
                s[i]=s[i]+32;
        }
        cout<<s;
    }
    else{
        cout<<s;
    }
 
    return 0;
}