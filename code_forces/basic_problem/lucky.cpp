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

        int  digit_first = (s[0] - '0') + (s[1] - '0') + (s[2] - '0');
        int  digit_second = (s[3] - '0') + (s[4] - '0') + (s[5] - '0');


        if(digit_first == digit_second) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}