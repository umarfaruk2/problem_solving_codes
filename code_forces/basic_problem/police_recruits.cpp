#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) 
        cin >> arr[i];


    int hired_police = 0;

    int count_untreated = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] >= 1) {
            hired_police += arr[i];
            continue;
        } 
        
        if(hired_police == 0 && arr[i] == -1) {
            count_untreated++;
        } else {
            hired_police--;
        } 
    } 

    cout << count_untreated << "\n";
    return 0;
}