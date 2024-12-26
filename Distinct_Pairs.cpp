#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, m; cin >> n >> m;
    pair<int, int>a[n];
    pair<int, int>b[m];

    for(int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i;
    }
    for(int i = 0; i < m; i++){
        cin >> b[i].first;
        b[i].second = i;
    }

    sort(a, a+n);
    sort(b, b+m);

    for(int i = 0; i < m; i++){
        cout << a[0].second << " " << b[i].second << '\n';
    }

    for(int i = 1; i < n; i++){
        cout << a[i].second << " " << b[m-1].second << '\n';
    }

    return 0;
}