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
using namespace std;
        
void mahfuzswe(){
   int t;
   cin>>t;
   while(t--){
     int x,y,z; cin>>x>>y>>z;
     int ttl = x*y;
     int ft = ttl/2;
     if(z > ft) cout<<"YES\n";
     else cout<<"NO\n";
  }
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    mahfuzswe();
    
    return 0;
}