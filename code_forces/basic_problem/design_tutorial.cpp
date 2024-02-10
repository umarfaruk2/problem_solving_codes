#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    if(n % 2 == 0) {
        cout << 4 << " " << n - 4 << "\n"; 
    } else {

        cout << 9 << " " << n - 9 << "\n"; 
    }

    return 0;
}