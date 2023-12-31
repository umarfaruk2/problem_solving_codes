#include <bits/stdc++.h>
using namespace std; 

#define ll long long 

void find_prime(long long n) {
    if(n == 1) {
        cout << "NO\n";
        return;
    }
    ll root = sqrt(n);
    if(root * root == n) {
        for(ll i = 2; i * i <= root; i++) {
            if(n % i == 0) {
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<long long> arr;
    
    for(int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        arr.push_back(x);
    }

    for(int i = 0; i < arr.size(); i++) {
        find_prime(arr[i]);
    }
    return 0;
}