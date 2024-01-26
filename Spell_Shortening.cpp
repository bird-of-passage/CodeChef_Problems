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
     int n; cin >> n;
     string s; cin >> s;
     int x = -1;
     for(int i=0; i<n-1; i++){
        int p = s[i] - '0';
        int q = s[i+1] - '0';

        if(p == q && i != n-2 ){
            continue;
        }
        else if(p >= q){
            x = i;
            break;
        }
        else x = n-1;
     }

     for(int i=0; i<n; i++){
        if(i == x) continue;
        else cout << s[i];
     }
     cout << '\n';
  }
}

        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);	cout.tie(0);
    
    mahfuzswe();
    
    return 0;
}