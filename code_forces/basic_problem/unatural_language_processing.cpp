#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        cout << s[0];

        for(int k = 1; k < n; k++) {
            if(s[k + 1] == 'a' || s[k + 1] == 'e') {
                cout << ".";
            }
            cout << s[k];
        }
        cout << "\n";
    }
    return 0;
}