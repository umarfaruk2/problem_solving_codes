#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k , l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drink = (k * l) / nl;
    int limes = c * d;
    int salt = p / np;

    int result = min(min(drink, limes), salt) / n;


    cout << result << "\n"; 
    return 0;
}