#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int sum = 0;

    for(int i = 1; ; i++) {
        sum += n;

        if(sum % 10 == 0 || sum % 10 == k) {
            cout << i << "\n";
            break;
        }     
    } 
    return 0;
}