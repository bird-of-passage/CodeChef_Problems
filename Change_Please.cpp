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
        int x; cin >> x;
        if(x <= 10) cout << 90 << '\n';
        if(x > 10 and x <= 20) cout << 80 << '\n';
        if(x > 20 and x <= 30) cout << 70 << '\n';
        if(x > 30 and x <= 40) cout << 60 << '\n';
        if(x > 40 and x <= 50) cout << 50 << '\n';
        if(x > 50 and x <= 60) cout << 40 << '\n';
        if(x > 60 and x <= 70) cout << 30 << '\n';
        if(x > 70 and x <= 80) cout << 20 << '\n';
        if(x > 80 and x <= 90) cout << 10 << '\n';
        if(x > 90 and x <= 100) cout << 0 << '\n';
    }
}
        
int32_t main(){
    NeedForSpeed
    
    mahfuzswe();
    
    return 0;
}