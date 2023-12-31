#include <bits/stdc++.h>
using namespace std; 

// not solve
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int s, n;
    cin >> s >> n;

    int man_st = s;
    bool isDefeat = false;
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        man_st += y; 

        if(x > y && n == 1) {
            isDefeat = false;
        } else if(x < y && n == 1)
            isDefeat = true; 
        else if(x < man_st && i != 0) {
           isDefeat = true; 
        } else {
            isDefeat = false;
        }
    } 

    if(isDefeat)
        cout << "YES\n";
    else
        cout << "NO\n";
    
    return 0;
}