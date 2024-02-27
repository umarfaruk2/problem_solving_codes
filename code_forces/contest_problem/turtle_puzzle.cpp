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

        int arr[n];

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int sum = 0; 

        for(int i = 0; i < n; i++) {
            if(arr[i] < 1) {
                sum += abs(arr[i]);
            } else {
                sum += arr[i];
            }
        }

        cout << sum << "\n";
    }
    return 0;
}