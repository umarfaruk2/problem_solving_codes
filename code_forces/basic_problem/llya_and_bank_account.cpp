#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    if(n > 0) {
        cout << n << "\n";
    } else {
        int first_num = (n % 10);
        n /= 10;
        int second_num = n % 10;
        n /= 10;

        if(abs(n) == 0) {
            if(abs(first_num) > abs(second_num)) {
                cout << second_num << "\n";
                return 0;
            } else {
                cout << first_num << "\n";
                return 0;
            }
        }

       if(abs(first_num) > abs(second_num)) {
            cout << stoi(to_string(n) + to_string(abs(second_num))) << "\n";
        } else {
            cout << stoi(to_string(n) + to_string(abs(first_num))) << "\n";
        }
    }
    return 0;
}