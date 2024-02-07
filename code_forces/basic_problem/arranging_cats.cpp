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

        string s, s2;
        cin >> s >> s2;
        int count = 0;
        int count2 = 0;


        for(int i = 0; i < n; i++) {
            if(s[i] == '1' && s2[i] == '0') {
                count++;
            } else if(s[i] == '0' && s2[i] == '1') {
                count2++;
            }
        }

        if(count <= count2) {
            cout << count2 << "\n";
        } else if(count > count2) {
            cout << (count + count2) - count2 << "\n";
        }
    } 
    return 0;
}