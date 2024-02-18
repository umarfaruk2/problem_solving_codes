#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        string sub_s = "";

        for(int i = 1; i < s.size() - 1; i += 2) {
            sub_s += s[i];
        }

        cout << s[0] <<  sub_s << s[s.size() - 1] << "\n";

    } 
    return 0;
}