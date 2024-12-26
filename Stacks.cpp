#include<bits/stdc++.h>
using namespace std;
#define int long long 
// #define inf (1LL << 61)
#define inf INT_MAX

signed main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; ++i) cin >> arr[i];

        multiset<pair<int, int>>s;
        int cnt = 0;

        for(int i = 0; i < n; ++i){
            auto it = s.upper_bound({arr[i], inf});
            if(it == s.end()) s.insert({arr[i], cnt++});
            else{
                pair<int, int>now = *it;
                s.erase(it);
                s.insert({arr[i], now.second});
            }
        }
        cout << s.size() << ' ';
        int ans[s.size()];
        for(pair<int, int>a : s) ans[a.second] = a.first;
        for(int i = 0; i < s.size(); i++) cout << ans[i] << " ";
        cout << '\n';
    }

    return 0;
}

