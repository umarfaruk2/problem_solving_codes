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

        int arr[n + 1];
        
        for(int i = 1; i <= n; i++) {
            cin >> arr[i];
        }
        
        int check_item = arr[1];
        int count_item = 0;
        int index = 0;

        for(int i = 1; i <= n; i++) {
            if(check_item == arr[i] && check_item != arr[2] && check_item != arr[3]) {
                index = 1;
                break;
            } else if(check_item == arr[i]) {
                count_item++;
            } else {
                index = i;
            }
        }

        cout << index << "\n";

    } 
    return 0;
}