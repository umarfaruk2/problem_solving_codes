#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int a, b, c;

        pair<int, int> pr = {INT_MAX, INT_MAX};

        while(a--) {
            int k, d;
            cin >> k >> d;
            if(min(pr.first, k)) {
                pr.first = min(pr.first, k);
                pr.second = d;
            }
        }

        cout << pr.first << " " << pr.second << "\n";
    }
    return 0;
}