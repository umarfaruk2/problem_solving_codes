#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    long long tem = n;
    if(n > 0) {
        cout << n << "\n";
    } else {
        int big_number = 0;
        while(n) {
            int last_number = n % 10;
            big_number = max(big_number, abs(last_number));
            n /= 10; 
        }

        string st = to_string(tem);
        
        size_t find_element = st.find(to_string(big_number));
        if(find_element != string::npos) {
            st.erase(find_element, 1);
        }

        long long result = stoi(st);

        cout << result << "\n";
    }
    return 0;
}