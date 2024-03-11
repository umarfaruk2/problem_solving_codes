#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        char arr[8][8];
        int arr_2[9] = {0};

        for(int i = 0; i < 8; i++) {
            for(int k = 0; k < 8; k++) {
                cin >> arr[i][k];
            }
        }

        for(int i = 0; i < 8; i++) {
            for(int k = 0; k < 8; k++) {
                if(arr[i][k] == 'R') {
                    arr_2[i + 1]++;    
                }
            }
        }
        
        int flag = 0;

        for(int i = 0; i < 9; i++) {
            if(arr_2[i] == 8) {
                flag = 1;
                break;
            }
        }

        if(flag == 1) {
            cout << "R\n";
        } else {
            cout << "B\n";
        }
    } 
    return 0;
}