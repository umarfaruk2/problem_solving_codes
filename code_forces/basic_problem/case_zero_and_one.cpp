#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    string s;
    cin >> s;

    int index_1 = 0;
    int index_2 = 0;

    for(int i = 0; i < t; i++) {
        if(s[i] == '0') {
            index_1++;
        } else {
            index_2++;
        }
    }

    cout << abs(index_1 - index_2) << "\n"; 
    return 0;
}