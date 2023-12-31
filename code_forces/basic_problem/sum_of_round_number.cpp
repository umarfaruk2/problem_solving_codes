#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        int part1 = t % 10;
        if(part1 != 0) {
            cout << part1 << " ";
            t -= part1;
        }

        int part2 = t % 100;
        if(part2 != 0) {
            cout << part2 << " ";
            t -= part2;
        }

        int part3 = t % 1000;
        if(part3 != 0) {
            cout << part3 << " ";
            t -= part3;
        }

        int part4 = t % 10000;
        if(part4 != 0) {
            cout << part4 << "\n";
            t -= part4;
        }

        // cout << part1 << "\n" << part2 << "\n" << part3 << "\n" << part4 << "\n";
    } 
    return 0;
}