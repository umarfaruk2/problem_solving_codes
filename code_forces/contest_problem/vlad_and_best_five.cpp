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
        
        int count_1 = 0;
        int count_2 = 0;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'A') 
                count_1++;
            else {
            count_2++;
            }
        }

        if(count_1 > count_2) {
            cout << "A\n";
        } else {
            cout << "B\n";
        }
        
    } 
    return 0;
}