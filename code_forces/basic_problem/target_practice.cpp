#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;


    while(t--) {
        int arr[10][10];

        for(int i = 0; i < 10; i++) {
            for(int k = 0; k < 10; k++) {
                cin >> arr[i][k];
            }
        }


        for(int i = 0; i < 10; i++) {
            for(int k = 0; k < 10; k++) {
                cout << i << k << " "; 
            }
            cout << "\n";
        }
    }  
    return 0;
}