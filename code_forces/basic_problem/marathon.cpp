#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int count = 0;

        if(a < b) {
            count++;
        } 
        if(a < c) {
            count++;
        }
        if(a < d) {
            count++;
        }

        cout << count << "\n";
    } 
    return 0;
}