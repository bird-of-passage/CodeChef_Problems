#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;


// Practice like you've never won, Perform like you've never lost. 

signed main(){
    cin.tie(0) -> ios_base::sync_with_stdio(0);
    
    int x, y, z;
    cin >> x >> y >> z;

    int k = y*z;
    
    if(k <= x) cout << x - k << '\n';
    else cout << -1 << '\n';
    
    return 0;
}