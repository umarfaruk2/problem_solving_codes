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
        
        vector<int> vc;
        vector<int> vc_2;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if(x % 2 == 0) {
                vc.push_back(x);
            } else {
                vc_2.push_back(x);
            }
        }

        for(int i = 0; i < vc_2.size(); i++) {
            vc.push_back(vc_2[i]);
        }

        int ans = 0;
        for(int i = 0; i < n; i++) {
            for(int k = i + 1; k < n; k++) {
                int res = gcd(vc[i], (2 * vc[k]));
                if(res > 1) {
                    ans++;
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}