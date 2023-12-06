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

bool isVowel(char c) {
    return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

void mahfuzswe(){
   string s;
    cin >> s;
    string t = "CODETOWN";
    for (int i = 0; i < 8; i++) {
        if (isVowel(s[i]) != isVowel(t[i])) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);	cout.tie(0);
    
   int t;
   cin>>t;
   while(t--){
     mahfuzswe();
  }
    
    return 0;
}