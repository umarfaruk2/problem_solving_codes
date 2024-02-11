#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t, n;
    cin >> t >> n;

    int arr[t]; 
    int count_participant = 0;

    for(int i = 0; i < t; i++) {
        cin >> arr[i];

        if(arr[i] + n <= 5) {
            count_participant++;
        }
    }

    cout << count_participant / 3 << "\n";
    return 0;
}