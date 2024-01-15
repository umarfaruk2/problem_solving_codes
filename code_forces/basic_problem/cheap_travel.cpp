#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int a_ticket = n * a;
    int m_ticket = (n / m) * b;

    cout << a_ticket << " " << m_ticket << "\n";
 
    return 0;
}