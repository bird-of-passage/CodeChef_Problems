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
     int a[n];
     int b[n];

     for(int i = 0; i < n; i++){
        cin >> a[i];
     }

     for(int i = 0; i < n; i++){
        cin >> b[i];
     }

     sort(a, a+n);
     sort(b, b+n);
     
     int k = n-2;
     int tmp = a[0] + b[n-1];

     bool ans = 1;
     for(int i=1; i<n; i++){
        if(tmp == a[i] + b[k]){
            ans = 1;
        }
        else{
            ans = 0;
            break;
        }
        k--;
     }

     if(ans == 1){
        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }cout << '\n';

        for(int i=n-1; i>=0; i--){
            cout << b[i] << " ";
        }cout << '\n';
     }
     else cout << "-1" << '\n';
  }
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);	cout.tie(0);
    
    mahfuzswe();
    
    return 0;
}