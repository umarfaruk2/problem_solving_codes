#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n; 
        cin >> n;
        string s;
        cin >> s;
        
        int ans = 0;
        // int count = 0;
        int arr[27];
        memset(arr, 0, sizeof(arr));

        int arr2[27];
        memset(arr2, 0, sizeof(arr2));

        for(int i = 0; i < s.size(); i++) {
            // arr[s[i] - 64] += s[i] - 64;
            arr[i] = s[i] - 64;
        }

        map<char, int> mp;


        for(int i = 0; i < s.size(); i++) {
            if(arr[i] < n) {
                ans += arr[i];
                // arr2[arr[i]] = 1; 
                if(ans > n) {
                    ans -= arr[i];
                    continue;
                }
                mp[s[i]]++;

                if(n == ans) {
                    break;
                } 
                // else if (ans > n) {
                //     arr2[arr[i]] = 0; 
                //     break;
                // }
            }
            
        }
        // cout << time_count << "\n";
        for(int i = 0; i < s.size(); i++) {
            // if(arr2[i] == 1) {
            //     count++;
            // }
            cout << arr[i] << " ";
            // cout << "\n";
            // cout << arr2[i] << " "; 
        }

        for(auto it : mp) {
            cout << it.first << " - " << it.second << "\n";
        }
        // cout << count << "\n";
    }
    return 0;
}