#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        bool ok = false;

        if(a + b == c) {
            ok = true;
        } else if(a + c == b) {
            ok = true;
        } else if(b + c == a) {
            ok = true;
        }

        if(ok) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } 
    return 0;
}