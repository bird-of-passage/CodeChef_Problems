#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

signed main(){
    cin.tie(0) -> ios_base::sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--){
        int n, m; 
        cin >> n >> m;

        vector<int> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
    
        vector<int> b(m);
        for(int i = 0; i < m; ++i) cin >> b[i];

        int cnt = 0;
        for(int i = 0; i < m; ++i){
            if(a[b[i]-1] > 0){
                cnt++;
                a[b[i]-1] -= 1;
            }
            
        }

        cout << m - cnt << '\n';
    }
    
    return 0;
}