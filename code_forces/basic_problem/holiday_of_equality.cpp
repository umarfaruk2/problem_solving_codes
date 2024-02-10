#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    int arr[t];
    int max_int = 0;

    for(int i = 0; i < t; i++) {
        cin >> arr[i];

        max_int = max(max_int, arr[i]);
    }  

    int sum = 0;

    if(t == 1) {
        cout << 0 << "\n";
        return 0;
    } else {
        for(int i = 0; i < t; i++) {
            sum += max_int - arr[i];
        }
    }

    cout << sum << "\n";

    return 0;
}