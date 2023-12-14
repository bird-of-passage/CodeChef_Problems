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
     int n; cin>>n;
     int types[n], nutritions[n];

     for(int i=0; i<n; i++){
        cin>>types[i];
     }

     for(int i=0; i<n; i++){
        cin>>nutritions[i];
     }

     int ans = 0;

     for(int i=1; i<=n; i++){
        int maxNutrition = INT_MIN;

        for(int j=0; j<n; j++){
            if(types[j] == i && nutritions[j] >= 0){
                maxNutrition = max(maxNutrition, nutritions[j]);
            }
        }
        if(maxNutrition > 0){
            ans += maxNutrition;
        }
     }

     cout << ans << '\n';

  }
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);	cout.tie(0);
    
    mahfuzswe();
    
    return 0;
}