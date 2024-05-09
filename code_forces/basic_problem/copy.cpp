#include <bits/stdc++.h>
using namespace std; 

#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;

        // vector<long long> arr;
        set<ll> arr;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;

            arr.insert(x);
        }

        cout << arr.size() << "\n";
    }    
    return 0;
}