#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        
        int ans = 0;
        if(n%2) ans++;
            
        for(int i = 1; i < n; i+=2){
            if(s[i] != s[i-1]){
                ans += 2;
            }
            else{
                ans += 1;
            }
        }
        cout << ans << '\n';

    }

    return 0;
}