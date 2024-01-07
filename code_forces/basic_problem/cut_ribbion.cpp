#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int arr[3];
    for(int i = 0; i < 3; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + 3);
    int ans1 = 0;

    if(n % arr[0] == 0) {
        ans1 = max(ans1, n / arr[0]);
    } else if(n % arr[1] == 0) {
        ans1 = max(ans1, n / arr[1]);
    } else if(n % arr[2] == 0) {
        ans1 = max(ans1, n / arr[2]);
    }

    int ans2 = 0;

    if(arr[0] + arr[1] + arr[2] == n) {
        ans2 = 3;
    }
    else if(arr[0] + arr[1] == n) { 
        ans2 = 2;
    } else if(arr[1] + arr[2] == n) {
        ans2 = 2;
    }

    int ans3 = 0;
    int a = (((n / arr[0]) - 1) * arr[0]) + arr[1]; 
    int b = (((n / arr[0]) - 1) * arr[0]) + arr[2]; 
    int c = (((n / arr[1]) - 1) * arr[1]) + arr[0]; 
    int d = (((n / arr[1]) - 1) * arr[1]) + arr[2]; 
    int e = (((n / arr[2]) - 1) * arr[2]) + arr[0]; 
    int f = (((n / arr[2]) - 1) * arr[2]) + arr[1]; 


    if(a == n || b == n) {
        ans3 = (n / arr[0]);
    } else if(c == n || d == n) {
        ans3 = (n / arr[1]);
    } else if(e == n || f == n) {
        ans3 = (n / arr[1]);
    }
    cout << max(ans1, max(ans2, ans3)) << "\n";
    return 0;
}