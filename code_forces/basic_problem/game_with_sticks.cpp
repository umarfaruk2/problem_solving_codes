#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int count = 0; 
    int index = 1;

    while(true) {
        if(n - index == 0) break;
        if(m - index == 0) break;
        index++;
        count++;
    }

    cout << count << "\n";        
    if(count % 2 != 0) {
        cout << "Malvika\n";
    } else {
        cout << "Akshat\n";
    }
    return 0;
}