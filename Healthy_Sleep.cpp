#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n; cin >> n;
    if(n == 8) cout << "PERFECT\n";
    else if(n < 8) cout << "LESS\n";
    else cout << "MORE\n";

    return 0;
}