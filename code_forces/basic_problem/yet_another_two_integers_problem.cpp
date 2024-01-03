#include <bits/stdc++.h>
using namespace std; 

#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        ll a, b;
        cin >> a >> b;

        ll c = abs(a - b);
        ll d = c / 10;

        if(a == b) {
            cout << 0 << "\n";
            continue;
        } else if(c < 10) {
            cout << 1 << "\n";
            continue;
        }

        if(c % 10 == 0) {
            cout << d << "\n";
        } else {
            cout << d + 1 << "\n";
        }
    } 
    return 0;
}