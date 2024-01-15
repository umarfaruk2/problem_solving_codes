#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    int sum = 0;
    int sum_2 = 0;

    for(int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        
        if(i == 0) {
            sum = b;
            sum_2 = b;
        }

        if( i > 0) {
            sum = (sum - a) + b;
            sum_2 = max(sum, sum_2);
        }
    } 

    cout << sum_2 << "\n";
    return 0;
}