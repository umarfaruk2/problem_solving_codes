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
        int dif = 0;
        int count = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        sort(arr, arr + n);
        for(int i = 1; i < n; i++) {
            int size_ = abs(arr[i - 1] - arr[i]);
                if(size_ > 1) {
                    count++;
                    dif = max(dif, size_);
                }
        }

        if(dif > 1) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
        
    } 
    return 0;
}