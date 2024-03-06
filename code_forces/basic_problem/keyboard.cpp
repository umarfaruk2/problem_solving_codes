#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    char c;
    cin >> c;
    string s;
    cin >> s;

    string str_1 = "qwertyuiop[]asdfghjkl;'zxcvbnm,./";


    if(c == 'R') {
        for(int i = 0; i < s.size(); i++) {
            for(int k = 0; k < str_1.size(); k++) {
                if(s[i] == str_1[k]) {
                    cout << str_1[k - 1];
                    break;
                }
            }
        }
    } else {
        for(int i = 0; i < s.size(); i++) {
            for(int k = 0; k < str_1.size(); k++) {
                if(s[i] == str_1[k]) {
                    cout << str_1[k + 1];
                    break;
                }
            }
        }
    } 
    

    cout << "\n";
    return 0;
}