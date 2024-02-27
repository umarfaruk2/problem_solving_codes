#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;

        long long find_min = INT_MAX;

        // single calculation
        if(n % 6 != 0) {
            long long check_1 = (n / 6) + 1;
            find_min = min(find_min, check_1 * 15);
        } else {
            long long check_1 = n / 6;
            find_min = min(find_min, check_1 * 15);
        }

        if(n % 8 != 0) {
            long long check_1 = (n / 8) + 1;
            find_min = min(find_min, check_1 * 20);
        } else {
            long long check_1 = n / 8;
            find_min = min(find_min, check_1 * 20);
        }

        if(n % 10 != 0) {
            long long check_1 = (n / 10) + 1;
            find_min = min(find_min, check_1 * 25);
        } else {
            long long check_1 = n / 10;
            find_min = min(find_min, check_1 * 25);
        }

        // 

        cout << find_min << "\n";
    } 
    return 0;
}