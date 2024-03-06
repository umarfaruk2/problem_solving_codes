#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int tem = n;
    int flag = n / k;
    n += flag; 

    while(true) {
        int check = n / k;

        if(check > flag) {
            n = (tem + check);
            flag = check;     
        } else {
            break;
        }
    }

    cout << tem + flag << "\n";
    return 0;
}