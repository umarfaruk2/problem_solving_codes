#include <bits/stdc++.h>
using namespace std; 

#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        ll arr[n];

        for(int i = 0; i < n; i++)
            cin >> arr[i];

        if(arr[1] / 2 <  arr[0]  || arr[n - 2] / 2 < arr[n -1]) {
            cout << "NO\n";
        } else {
            int flag = INT_MIN;

            for(int i = 1; i < n - 2; i++) {
                // cout << arr[i] << " " << arr[i + 1] << " ";
                if(flag < abs(arr[i] - arr[i + 1]))
                    flag = abs(arr[i] - arr[i + 1]);
            }

            if(flag <= 2 || flag == 0) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}