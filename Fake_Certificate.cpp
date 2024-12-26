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
// one day they'll knw you can do sum'n








void mahfuzswe() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        vector < int > idx;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                idx.push_back(i);
            }
        }

        int xx = idx.size();

        if (xx == n || xx == 0) cout << n << '\n';
        else {
            // int first = idx[0] - 0;
            int second = 0;
            // int third = (n - 1) - idx[xx - 1];

            for (int i = 0; i < xx - 1; i++) {
                int x = idx[i + 1] - idx[i];
                if (x > second) {
                    second = x;
                }
            }

            // first++; second++; third++;

            // int ff = max(first, second);
            // int ans = max(ff, third);

            cout << second+1 << '\n';
        }

    }
}
        
int32_t main(){
    NeedForSpeed
    
    mahfuzswe();
    
    return 0;
}