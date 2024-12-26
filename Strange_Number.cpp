// Journey of thousand miles starts with
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;



// what to think | how to think | don't be stupid
signed main(){
    int t; cin >> t;
    while(t--){
        int x, k; cin >> x >> k;
        int ans = 0;
        while(x%2 == 0){
            ans++;
            x /= 2;
        }
        for(int i = 3; i*i <= x; i += 2){
            while(x % i == 0){
                ans++;
                x /= i;
            }
        }
        if(x > 1) ans++; // is x is prime

        if(ans >= k) cout << 1 << '\n';
        else cout << 0 << '\n';
    }

    return 0;
}