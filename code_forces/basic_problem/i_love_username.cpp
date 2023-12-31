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

    int worst = arr[0];
    int best = arr[0];
    int count = 0;

    for(int i = 1; i < n; i++) {
        if(best < arr[i]) {
            count++;
            best = arr[i];
        } else if(arr[i] < worst) {
            count++;
            worst = arr[i];
        }
    }
    
    cout << count << "\n";
    return 0;
}