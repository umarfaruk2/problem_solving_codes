#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n, m, a;
        cin >> n >> m >> a;

        int arr_1[n];
        int arr_2[m];

        for(int i = 0; i < n; i++) 
            cin >> arr_1[i];
        
        for(int i = 0; i < m; i++) 
            cin >> arr_2[i];


        int ans = 0;

        for(int i = 0; i < n; i++) {
            for(int k = 0; k < m; k++) {
                if(arr_1[i] + arr_2[k] <= a) {
                    ans++;
                }
            }
        } 

        cout << ans << "\n";
    } 
    return 0;
}