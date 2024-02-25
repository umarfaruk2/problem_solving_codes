#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n; 

    long long arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result_store;
    int arr_2[n] = {0};
    int index = 0;

    for(int i = 0; i < n - 1; i++) {
        if(arr[i] <= arr[i + 1]) {
            arr_2[index]++; 
        } else {
            index++;
        }
    }

    int result = 0; 

    for(int i = 0; i < n; i++) {
        result = max(result, arr_2[i]);
    }

    if(n == 1) {
        cout << 1 << "\n";
    } else {
        cout << result + 1 << "\n";
    }
    return 0;
}