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

        int count = 0;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '@') {
                count++;
            }
            
            if(s[i + 1] == '*' && s[i + 2]  == '*') {
                break;
            } 
        }

        cout << count << "\n";
    } 
    return 0;
}