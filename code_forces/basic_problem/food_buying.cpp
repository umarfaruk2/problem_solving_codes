#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int ans = 0;

        int divided = n / 10;
        ans += divided;
        int sub = n - (10 * divided);
        int plus = divided + sub;

        while(true) {
            if(plus < 10) {
                break;
            }

            divided = plus / 10;
            ans += divided;

            sub = plus - (10 * divided);

            plus = sub + divided;
        }

        cout << n + ans << "\n";
    } 
    return 0;
}