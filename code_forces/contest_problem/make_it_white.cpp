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
        string s;
        cin >> s;

        int start_length = 0;
        int end_length = 0;

        for(int i = 1; i <= n; i++) {
            if(s[i-1] == 'B' && start_length == 0) {
                if(n == 1)
                    start_length = 1;
                else 
                    start_length = i;
            }

            if(s[i-1] == 'B' && start_length != 0) {
                end_length = i;
            }
        }

        cout << (end_length - start_length) + 1 << "\n";
    }

    return 0;
}