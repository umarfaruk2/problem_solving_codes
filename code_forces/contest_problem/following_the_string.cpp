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

        string s = "";

        for(int i = 0; i < n; i++) {
            cin >> arr[i];

            s += 'a';
        }

        cout << s << "\n"; 
    } 
    return 0;
}