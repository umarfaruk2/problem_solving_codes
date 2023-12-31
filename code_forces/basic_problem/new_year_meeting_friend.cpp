#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num = 3;
    int arr[num];

    for(int i = 0; i < 3; i++) {
        cin >> arr[i];
    }

    map<int, vector<int>> mp;

    for(int i = 0; i < 3; i++) {
        for(int k = 0; k < 3; k++) {
            if(i != k) {
                mp[arr[i]].push_back(abs(arr[i] - arr[k]));
            }
        }
    } 

    int min_dis = INT_MAX;

    for(auto item : mp) {
        int sum = 0; 
        for(auto value : item.second) {
            sum += value;
        }

        if(sum < min_dis)
            min_dis = sum;
    }

    cout << min_dis << "\n";
    return 0;
}