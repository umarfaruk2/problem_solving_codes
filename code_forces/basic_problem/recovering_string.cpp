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

        string char_ = "abcdefghijklmnopqrstuvwxyz";

        if(n <= 26) {
            int last_word = n - 2;

            cout << "aa" << char_[last_word - 1] << "\n";
        } else {
            if(n - 26 < 2) {
                int last_word = n - 2;

                cout << "aa" << char_[last_word - 1] << "\n";
            } else {
                int sub = n / 26;

                int sub_2 = n - 26;
                int sub_3 = sub_2 - 1;

                if(sub == 1 || n == 52) {
                    cout << "a" << char_[sub_3 - 1] << "z\n";
                } else if( sub == 2) {
                    int check = n - (26 * 2);
                    cout << char_[check - 1] << "zz\n";
                } else if(sub == 3) {
                    cout << "zzz\n";
                }
            }
        }
    }
    return 0;
}