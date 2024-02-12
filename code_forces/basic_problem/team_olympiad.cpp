#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; 
    cin >> t;

    vector<pair<int, int>> arr;

    int a = 0, b = 0, c = 0;

    for(int i = 0; i < t; i++) {
        int x;
        cin >> x;

        arr.push_back({i, x});

        if(arr[i].second == 1) {
            a++;
        } else if(arr[i].second == 2) {
            b++;
        } else {
            c++;
        }
    }

    if(a == 0 || b == 0 || c == 0) {
        cout << 0 << "\n";
    } else {
        int min_sub = min(min(a, b), c);

        cout << min_sub << "\n";

        for(int i = 0; i < min_sub; i++) {
            int flag_1 = 0;
            int a = 0, b = 0, c = 0;
            for(int r = 0; r < t; r++) {
                if(arr[r].second != 0) {
                    if(arr[r].second == 1 && a == 0) {
                        cout << arr[r].first + 1 << " ";
                        flag_1++;
                        a = 1;
                        arr[r].second = 0;
                    } else if(arr[r].second == 2 && b == 0) { 
                        cout << arr[r].first + 1 << " ";
                        flag_1++;
                        b = 2;
                        arr[r].second = 0;
                    } else if(arr[r].second == 3 && c == 0) {
                        cout << arr[r].first + 1 << " ";
                        flag_1++;
                        c = 1;
                        arr[r].second = 0;
                    } 
                }
                if(flag_1 == 3) {
                    break;
                }
            }

            cout << "\n";
        }
    }

    return 0;
}