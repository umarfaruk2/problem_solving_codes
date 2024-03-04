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

        int check = n % 2020;
        long long check_2 = check * 2021;

        if(check_2 > n) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    } 
    return 0;
}