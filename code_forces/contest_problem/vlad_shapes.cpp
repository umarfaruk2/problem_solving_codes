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

        int arr_2[n] = {0};

        for(int i = 0; i < n; i++) {
            string s;
            cin >> s;

            for(int k = 0; k < n; k++) {
                if(s[k] == '1') {
                    arr_2[i]++;
                }
            }
        }

        vector<int> arr_3;
        int flag = 0;
        for(int i = 0; i < n; i++) {
            if(arr_2[i] != 0) {
                arr_3.push_back(arr_2[i]);
            }
        }

        for(int i = 0; i < arr_3.size() - 1; i++) {
            if(arr_3[i] == arr_3[i + 1]) {
                flag = 1;
            } else {
                flag = 0;
            }
        }

        if(flag == 1) {
            cout << "SQUARE\n";
        } else {
            cout << "TRIANGLE\n";
        }
    }
    return 0;
}