#include <bits/stdc++.h>
using namespace std; 

const int MAX = 1e9;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;

        // long long arr[MAX];
        vector<long long> arr(n + 1); 

        for(long long i = 1; i <= n; i++) {
            arr[i] = i;
        }

        int temp = arr[1];
        arr[1] = arr[2];
        arr[2] = temp;

        long long index = 0;
        for(long long i = 3; i <= n; i++) {
            swap(arr[i], arr[i - 2]);
            if(arr[i] == 1) {
                index = i;
            }
            // cout << arr[i - 2] << " " << arr[i] << " index -> "  << i <<  " ";                            
        }

        cout << index << "\n";
    }
    return 0;
}