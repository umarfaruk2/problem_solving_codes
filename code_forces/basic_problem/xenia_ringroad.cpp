#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    long long count_unit = 0;
    int arr[m];
    for(int i = 0; i < m; i++) {
        int a;
        cin >> a;

        arr[i] = a;

        if(i == 0) {
            count_unit += a - 1;
            continue;
        }

        if(a < arr[i - 1]) {
            count_unit += a + (n - arr[i - 1]);
        } else if(a > arr[i - 1]) {
            count_unit += a - arr[i - 1];
        }
    } 
 
    cout << count_unit << "\n";
    return 0;
}