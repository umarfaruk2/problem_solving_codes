#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;

        int flag_1 = a - b;
        int flag_2 = a + b;

        int flag_3 = c - d;
        int flag_4 = c + d;

        if((flag_1 * n <= flag_4 && flag_1 * n >= flag_3) || (flag_2 * n <= flag_4 && flag_2 * n >= flag_3)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } 
    return 0;
}