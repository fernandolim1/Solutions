#include <bits/stdc++.h>
using namespace std;

int main() {
    map<char,int> m;
    string s;
    while(cin >> s) {
        m[s[0]]++;
    }

    int b = 0;
    for(auto i : m) {
        b = max(b, i.second);
    }

    cout << b << endl;
}