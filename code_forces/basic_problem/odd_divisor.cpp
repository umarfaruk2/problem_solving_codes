#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        long long n; 
        cin >> n;

        if(n % 2 == 0) {
            int flag = 0;
            int new_ = n;
            while(true){
                int check = new_ / 2;
                if(check < 3)
                    break;
                
                if(check % 2 != 0) {
                    flag = 1;
                    break;
                }
                new_ = check;
            }

            if(flag == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    } 
    return 0;
}