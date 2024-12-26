#include<bits/stdc++.h>
#define int long long
#define double long double
#define pb(e) push_back(e);
#define fi first
#define se second
#define pii pair<int, int>
#define mp make_pair
#define flp(i,a,b) for(int i=a; i<=b; i++)
#define sq(a) (a)*(a)
#define all(x) x.begin(),x.end()
#define NeedForSpeed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const int M = 1e9+7; // MOD
int expo(int a,int b){int res=1;while(b){if(b%2)res=(res*a)%M;a=(a*a)%M;b/=2;}return res;}
int gcd(int a, int b){if(a==0) return b; return gcd(b%a,a);}
int lcm(int a, int b){return (a*b)/gcd(a,b);}
        
/*_____________________________________________________________________________________________*/
// sky high, sir! don't give up..
// easy, you can do it! 
        
void mahfuzswe(){
    int t; cin>>t;
    while(t--){
        int n, m; cin >> n >> m;
        vector<int>batskls(n);
        vector<int>bowlskls(m);

        for(int i=0; i<n; i++) cin >> batskls[i];
        for(int i=0; i<m; i++) cin >> bowlskls[i];

        if(n<4 || m<4){
            cout << -1 << '\n';
            continue;
        }

        sort(batskls.rbegin(), batskls.rend());
        sort(bowlskls.rbegin(), bowlskls.rend());

        int ans = 0;
        for(int i=0; i<4; i++){
            ans += batskls[i];
            ans += bowlskls[i];
        }

        vector<int>baki;
        for(int i=4; i<n; i++) baki.push_back(batskls[i]);
        for(int i=4; i<m; i++) baki.push_back(bowlskls[i]);

        sort(baki.rbegin(), baki.rend());

        for(int i=0; i<3 && i<baki.size(); i++){
            ans += baki[i];
        }

        cout << ans << '\n';

    }
}
        
int32_t main(){
    NeedForSpeed
    
    mahfuzswe();
    
    return 0;
}