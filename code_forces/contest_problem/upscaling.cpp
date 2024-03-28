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
        int k = 2 * n;

        for(int i = 1; i <= k / 2; i++) {
            if(i % 2 != 0) {
                for(int g = 0; g < 2; g++) {
                    int  index = 1;
                    for(int d = 1; d <= k; d += 2) {
                        if(index % 2 != 0) {
                            cout << "##";
                        } else {
                            cout << "..";
                        }
                        index++;
                    }
                    cout << "\n";
                }
            } else {
                for(int g = 0; g < 2; g++) {
                    int index  = 1;
                    for(int d = 1; d <= k; d += 2) {
                        if(index % 2 != 0) {
                            cout << "..";
                        } else {
                            cout << "##";
                        }
                        index++;
                    }  
                    cout << "\n"; 
                }
            }
        }
    } 
    return 0;
}