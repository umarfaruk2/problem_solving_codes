#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    int arr[t + 1];
    
    for(int i = 1; i <= t; i++) {
        cin >> arr[i];
    }

    int sereja = 0;
    int dima = 0;

    int index_1 = 1;
    int index_2 = t;

    for(int i = 1; i <= t; i++) {
        if(i % 2 == 0) {
            if(arr[index_1] > arr[index_2]) {
                dima += arr[index_1];
                index_1++;
            } else {
                dima += arr[index_2];
                index_2--;
            }
        } else {
            if(arr[index_1] > arr[index_2]) {
                sereja += arr[index_1];
                index_1++;
            } else {
                sereja += arr[index_2];
                index_2--;
            }
        }
    }

    cout << sereja << " " << dima << "\n";

    return 0;
}