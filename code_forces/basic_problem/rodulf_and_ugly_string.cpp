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

        int flag = 0;

        for(int i = 0; i < n; i++) {
            if(s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p') {
                flag++;
                i += 2;
                continue;
            } 

            if(s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e') {
                flag++;
                i += 2;
            }
        }
        cout << flag << "\n";
    } 
    return 0;
}