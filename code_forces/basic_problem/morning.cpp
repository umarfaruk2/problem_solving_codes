#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s; 

        int a = s[0] - '0'; 
        int b = s[1] - '0'; 
        int c = s[2] - '0'; 
        int d = s[3] - '0'; 

        if(a == 0) a = 10;
        if(b == 0) b = 10;
        if(c == 0) c = 10;
        if(d == 0) d = 10;

        int min_num = abs(1 - a) + 4;

        min_num += abs(a - b); 
        min_num += abs(b - c);
        min_num += abs(c - d);

        cout << min_num << "\n";

    } 
    return 0;
}