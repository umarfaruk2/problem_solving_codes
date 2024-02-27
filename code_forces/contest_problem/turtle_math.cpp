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
        int sum = 0; 

        for(int i = 0; i < n; i++) {
            cin >> arr[i];

            sum += arr[i];
        }

        if(sum <= 2) {
            cout << 1 << "\n";
        } else if(sum % 3 == 0) {
            cout << 0 << "\n";
        } else {
            int step = 0;

            for(int i = 0; i < n; i++) {
                int check = sum - arr[i];

                if(check % 3 == 0) {
                    step = 1;
                    break; 
                }
            }
            if(step == 1) {
                cout << 1 << "\n";
            } else {
                if((sum + 1) % 3 == 0) {
                    cout << 1 << "\n";
                } else {
                    cout << 2 << "\n";
                }
            }
        }
    } 
    return 0;
}