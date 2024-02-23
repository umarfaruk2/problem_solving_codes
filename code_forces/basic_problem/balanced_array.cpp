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

        int check_odd = n / 2;
        if(check_odd % 2 != 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            int sum = 0;
            for(int i = 2; i <= n; i += 2) {
                cout << i << " ";
                sum += i;
            }
            int sum_2 = 0; 
            for(int i = 1; i < n - 1; i += 2) {
                cout << i << " ";
                sum_2 += i;
            }

            cout << sum - sum_2 << "\n";
        }
    } 
    return 0;
}