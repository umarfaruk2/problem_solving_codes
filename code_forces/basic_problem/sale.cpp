#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> arr;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());

    int negative_int = 0;
    int positive = 0;  

    for(int i = 0; i < k; i++) {
        if(arr[i] <= 0) {
            negative_int += abs(arr[i]);
        } else {
            positive += arr[i];
        }
    }

    cout << negative_int << "\n";
    return 0;
}