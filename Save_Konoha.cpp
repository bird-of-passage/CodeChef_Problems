#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t; cin >> t;
    while(t--){
        int n, z; cin >> n >> z;
        int ans = 0;
        
        multiset<int>mst;

        for(int i = 0; i < n; i++){
            int a; cin >> a;
            mst.insert(a);
        }

        while(z > 0 and mst.size()){
            ans++;
            int x = *mst.rbegin();
            mst.erase(--mst.end());
            z -= x;
            x /= 2;
            
            if(x > 0) mst.insert(x);
        }

        if(z <= 0) cout << ans << '\n';
        else cout << "Evacuate\n";
    }

    return 0;
}

