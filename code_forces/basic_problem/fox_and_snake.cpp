#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int num = 0;

    for(int i = 1; i <= n; i++) {
        for(int k = 1; k <= m; k++) {
            if(i % 2 == 0 && num == 0 && k < m) {
                cout << ".";
            } else if(i % 2 != 0) {
                cout << "#";
            } else if(i % 2 == 0 && num == 1 && k > 1) {
                cout << ".";
            } else {
                cout << "#";
            }
        }
        if(i % 2 == 0) {
            if(num == 0) {
                num = 1;
            } else {
                num = 0;
            }
        } 
        cout << "\n";
    }   
    return 0;
}