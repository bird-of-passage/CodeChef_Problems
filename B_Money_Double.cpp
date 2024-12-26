#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t; cin >> t;
    while(t--){
        int x, y; cin >> x >> y;
        int ans = x;
        if(x >= 1000){
            while(y--){
                ans *= 2;
            }
        }
        else{
            ans += 1000;
            y--;
            while(y--){
                ans *= 2;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}