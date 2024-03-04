#include <bits/stdc++.h>
using namespace std; 

#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;

        int flag = 0;
        ll tem = n;
        int result = 0;

        if(n == 1) {
            cout << 0 << "\n";
            continue;
        } else {
            while(tem != 1) {
                if((n % 10) % 2 != 0) {
                    if(tem % 6 != 0) {
                        tem *= 2;
                        if(flag == 1) {
                            cout << -1 << "\n";
                            break;
                        }
                        flag = 1;
                        result++;
                    } else {
                        if(tem % 6 == 0) {
                            tem /= 6;
                            flag = 0;
                            result++;
                        }
                    }
                } else {
                    if(tem % 6 == 0) {
                        tem /= 6;
                        flag = 0;
                        result++;
                    } else {
                        tem *= 2;
                        if(flag == 1) {
                            cout << -1 << "\n";
                            break;
                        }
                        flag = 1;
                        result++;
                    }
                }
            }
        }
        
        if(flag != 1){
            cout << result << "\n";
        }
    } 
    return 0;
}