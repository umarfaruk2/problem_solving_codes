#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    int misca = 0;
    int chris = 0;

    for(int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;

        if(a > b) {
            misca++;
        } else if (a < b){
            chris++;
        }
    } 

    if(misca == chris) {
        cout << "Friendship is magic!^^\n";
    } else if(misca > chris) {
        cout << "Mishka\n";
    } else {
        cout << "Chris\n";
    }
    return 0;
}


