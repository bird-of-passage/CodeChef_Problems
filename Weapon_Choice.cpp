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
        
int gcd(int a, int b){if(a%b==0) return b; else return gcd(b, a%b);}
int lcm(int a, int b){return (a*b)/gcd(a,b);}
        
void mahfuzswe(){
   int t;
   cin>>t;
   while(t--){
    int h, x, y1, y2, k; cin >> h >> x >> y1 >> y2 >> k;
    int gun;
    if(h%x == 0){
        gun = h/x;
    }else{
        gun = (h/x)+1;
    }
    int ls1 = 0, ls2 = 0;
    while(k > 0 && h > 0){
        ls1++;
        h -= y1;
        k--;
    }
        if(h > 0){
        ls2 = (h + y2 - 1) / y2;
        }
        
        int ls = ls1 + ls2;
    
        if(gun < ls) cout << gun << '\n';
        else cout << ls << '\n';
    }
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);	cout.tie(0);
    
    mahfuzswe();
    
    return 0;
}