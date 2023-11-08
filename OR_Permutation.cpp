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
    int n; cin >> n;
    vector<int> perm(n);
    for(int i = 0; i < n; i++) {
      perm[i] = i + 1;
    }
    
    for(int i = 1; i < n; i++) {
      int mask = ~(perm[i - 1] | perm[i - 2]);
      int swapIndex = upper_bound(perm.begin(), perm.end(), (perm[i] | perm[i - 1]) & mask) - perm.begin();

      if (swapIndex != perm.size()) {
        swap(perm[i], perm[swapIndex]);
      }
    }

    for (int i = 0; i < n; i++) {
      cout << perm[i] << " ";
    }
    cout << '\n';
  }
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    mahfuzswe();
    
    return 0;
}