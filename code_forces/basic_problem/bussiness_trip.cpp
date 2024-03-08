#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int k;
    cin >> k;

    int arr[12];

    for(int i = 0; i < 12; i++) 
        cin >> arr[i];

    sort(begin(arr), end(arr), greater<int>());

    int sum = 0;
    int index = 0;

    if(k == 0) {
        cout << 0 << "\n";
        return 0;
    }

    int flag = 0;

    for(int i = 0; i < 12; i++) {
        sum += arr[i];
        index++;

        if(sum >= k) {
            flag = 1;
            break;
        }
    }

    if(flag == 1) {
        cout << index << "\n";
    } else {
        cout << -1 << "\n";
    }
    return 0;
}