#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n, m, a, x, y;
    cin >> n >> m >> a;



    if(n % a == 0) 
        x = n / a;
    else 
        x = (n / a) + 1;
    
    if(m % a == 0) 
        y = m / a;
    else
        y = (m / a) + 1;

    
    cout << x * y << "\n";
    return 0;
}