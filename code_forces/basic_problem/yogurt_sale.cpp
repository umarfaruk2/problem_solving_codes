#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;


        if(n % 2 == 0) {
            int check = (n * b) / 2;
            int check_2 = n * a;

            if(check < check_2)
                cout << check << "\n";
            else 
                cout << check_2 << "\n";
        } else {
            int odd_check = (((n - 1) * b) / 2) + a;
            int odd_check_2 = n * a;

            if(odd_check < odd_check_2)
                cout << odd_check << "\n";
            else
                cout << odd_check_2 << "\n";
        }
    } 
    return 0;
}