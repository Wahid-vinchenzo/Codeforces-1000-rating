//https://codeforces.com/problemset/problem/58/A

#include <iostream>
#include <string>
 
using namespace std;
 
bool isHello(const string& s) {
    int i = 0, j = 0;
 
    for (; i < s.length() && j < 5; ++i) {
        if (s[i] == 'h' && j == 0) {
            j++;
        } else if (s[i] == 'e' && j == 1) {
            j++;
        } else if (s[i] == 'l' && j == 2) {
            j++;
        } else if (s[i] == 'l' && j == 3) {
            j++;
        } else if (s[i] == 'o' && j == 4) {
            j++;
        }
    }
 
    return j == 5;
}
 
int main() {
    string s;
    cin >> s;
 
    if (isHello(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
}