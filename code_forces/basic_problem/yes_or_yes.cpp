#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while(n--) {
        string s;
        cin >> s;

        string new_string = "esy";
        int arr[27] = {0};

        for(int i = 0; i < 3; i++) {
            if(s[i] < 'a') {
                s[i] = s[i] + 32;
                arr[s[i] - 'a']  = 1; 
            }
            arr[s[i] - 'a']  = 1; 
        }

        sort(s.begin(), s.end());

        if(s == new_string) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }

        for(int i = 0; i < 27; i++) {
            cout << i << " -> " << arr[i] << "\n";
        }

        cout << "\n";
    } 
    return 0;
}