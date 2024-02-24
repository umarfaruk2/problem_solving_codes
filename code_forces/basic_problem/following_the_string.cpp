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

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int arr_2[27] = {0};
        string alphabet = "abcdefghijklmnopqrstuvwxyz";
        int index = 0;
        string ans = "";

        for(int i = 0; i < n; i++) {
            if(arr[i] == 0) {
                ans += alphabet[index];
                arr_2[index] = 1;
                index++;
            } else {
                for(int k = 0; k < 27; k++) {
                    if(arr[i] == arr_2[k]) {
                        ans += alphabet[k];
                        arr_2[k]++;
                        break;
                    }
                }
            }
        }

        cout << ans << "\n";
        
    }  
    return 0;
}