#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> arr;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n";
    return 0;
}