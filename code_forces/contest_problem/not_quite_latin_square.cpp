    #include <bits/stdc++.h>
    using namespace std; 
     
    int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
     
        int t;
        cin >> t;
     
        for(int i = 0; i < t; i++) {
            char s[t][t];
     
            for(int l = 0; l < 3; l++) {
                for(int k = 0; k < 3; k++) {
                    cin >> s[l][k];
                }
            }
     
            for(int l = 0; l < 3; l++) {
                char x = '?', y = '?', z = '?'; 
                bool yes = false;
                for(int k = 0; k < 3; k++) {
                    if(s[l][k] == '?') {
                        if(s[l][0] == 'A') {
                            x = s[l][0];
                        }
                        if(s[l][1] == 'A') {
                            x = s[l][1];
                        } 
                        if(s[l][2] == 'A') {
                            x = s[l][2];
                        } 
                        if(s[l][0] == 'B') {
                            y = s[l][0];
                        } 
                        if(s[l][1] == 'B') y = s[l][1];
                        if(s[l][2] == 'B') y = s[l][2];
                        if(s[l][0] == 'C') z = s[l][0];
                        if(s[l][1] == 'C') z = s[l][1];
                        if(s[l][2] == 'C') z = s[l][2];
     
                        if(x == '?') {
                            cout << 'A' << "\n";
                        } else if(y == '?')
                            cout << 'B' << "\n";
                        else if(z == '?')
                            cout << 'C' << "\n";
     
                        yes = true;
                        break;
                    } 
                    if(yes) {
                        break;
                    }
                }
            }
        } 
        return 0;
    }
