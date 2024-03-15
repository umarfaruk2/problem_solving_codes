#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, b, d;
    cin >> n >> b >> d;

    int arr[n];

    for(int i = 0; i < n; i++)  
        cin >> arr[i];

    int sum = 0;
    int flag = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] > b) {
            continue;
        }
        
        sum += arr[i];

        if(sum > d) {
            flag++;
            sum = 0;
        }
    }

    cout << flag << "\n";

    return 0;
}