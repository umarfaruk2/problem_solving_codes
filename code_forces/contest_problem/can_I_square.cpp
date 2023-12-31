#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        long long sum = 0;
        for(int k = 0; k < x; k++) {
            int z;
            cin >> z;
            sum += z;
        }

        long long h = sqrt(sum);
        if(h * h == sum) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }  
    return 0;
}