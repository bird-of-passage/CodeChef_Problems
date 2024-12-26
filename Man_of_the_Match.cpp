#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t; cin >> t;
    while(t--){
        vector<int>v;
        int y = 22;
        while(y--){
            int r, w; cin >> r >> w;
            int x = r + (w*20);
            v.push_back(x);
        }

        int n = v.size();
        int mx = -1;
        int ans;
        for(int i=0; i<n; i++){
            if(v[i] > mx){
                mx = v[i];
                ans = i;
            } 
        }

        cout << ans+1 << '\n';
    }

    return 0;
}