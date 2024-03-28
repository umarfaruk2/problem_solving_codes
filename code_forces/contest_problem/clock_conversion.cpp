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

        string subStr_1 = s.substr(0, 2);
        // string subStr_2 = s.substr(3, 4);
        int con = stoi(subStr_1);
        // int con_2 = stoi(subStr_2);

        // cout << subStr_2 << "\n"; 
        if(con > 12) {
            if(con - 12 > 9) 
                cout << con - 12 << ":" << s[3] << s[4] << " PM\n"; 
            else {
                cout << "0" << con - 12 << ":" << s[3] << s[4] << " PM\n"; 
            }
        } else if(con == 0) {
            cout << 12 << ":" << s[3] << s[4] << " AM\n";
        } else {
            if(con < 12){
                cout << s << " AM\n";
            } else {
                cout << s << " PM\n";
            }
        }

    } 
    return 0;
}