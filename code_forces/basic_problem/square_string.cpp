#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        if(s.size() % 2 != 0) {
            cout << "NO\n";
            continue;
        }

        int size = s.size() / 2; 
        string str_1 = s.substr(0, size);
        string str_2 = s.substr(size);


        if(str_1 == str_2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } 
    return 0;
}