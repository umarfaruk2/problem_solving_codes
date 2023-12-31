#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int problem_count = 0;
    int problem_time = 0;
    int distance_time = 240 - k;

    for(int i = 1; i <= n; i++) {
        problem_time += 5 * i;
        if(problem_time > distance_time) {
            break;
        }
        problem_count++;
    }

    cout << problem_count << "\n";
    return 0;
}