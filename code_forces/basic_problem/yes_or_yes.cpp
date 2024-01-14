#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while(n--) {
        string s;
        cin >> s;

        string new_string = "yes";

        for(int i = 0; i < 3; i++) {
            if(s[i] < 'a') {
                s[i] = s[i] + 32;
            }
        }

        if(s == new_string) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    } 
    return 0;
}