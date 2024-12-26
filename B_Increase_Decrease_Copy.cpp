#include<bits/stdc++.h>
// #define int long long
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
        
bool binarySearch(int n, vector<int>arr, int target){
    int start = 0;
    int end = n-1;
    while(start <= end){
        int mid = (start + end) / 2;
        if(target == arr[mid]) return 1;
        else if(target > arr[mid]) start = mid + 1;
        else end = mid - 1;
    }
    return 0;
}

void mahfuzswe(){
    int t; cin>>t;
    while(t--){
        int n; cin >> n;
        vector<int>a(n);
        vector<int>b(n+1);

        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n + 1; i++) cin >> b[i];

        int ans = 0;

        for(int i = 0; i < n; i++){
            while(a[i] != b[i]){
                if(a[i] < b[i]) a[i]++;
                else a[i]--;
                ans++;
            }
        }

        int x;
        auto it = a.lower_bound(b[n]);
        if (it != a.end()) {
            x = *it;
        }

        cout << x << '\n';
    }
}
        
int main(){
    NeedForSpeed
    
    mahfuzswe();
    
    return 0;
}