#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    
    while(t--){    
      int a, b, c;
      cin >> a >> b >> c;
      
      if(b == 0)
          b = 24;
          
      if(c == 0)
          c = 60;
          
      
    pair<int, int> pr = {INT_MAX, INT_MAX};
         
     
      while(a--) {
          int k, d;
          cin >> k >> d;
          
          if(min(pr.first, k)) {
              pr.first = min(pr.first, k);
              pr.second = d;
          }
      }
      
     
     if(pr.first == 0)
         pr.first = 24;
     
     if(pr.second == 0)
         pr.second = 60;
    

    if(b > pr.first) {
        int i = 24 - b;

        int cv = (i * 60) - c;
        int o = (cv % 60) + pr.second;
        int e = o / 60;
        if(e >= 1) {
            int ans_1 = pr.first + (cv / 60) + e;
            int ans_2 = o % 60;   
            cout << ans_1 << " " << ans_2 << "\n";
        } else {
            int ans_1 = pr.first + (cv / 60);
            int ans_2 = o;
            cout << ans_1 << " " << ans_2 << "\n";
        }


        continue;
    }
    
    int ansOne;
    
    
    if(c != 60)
        ansOne = ((pr.first - b) * 60) - c;
    else
        ansOne = ((pr.first - b) * 60);
    
    if(pr.second != 60)
        ansOne += pr.second;

          

    cout << ansOne / 60 << " " << ansOne % 60 << "\n";
      
    }
    return 0;
}