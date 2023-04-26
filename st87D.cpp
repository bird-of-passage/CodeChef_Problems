#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t; cin>>t;
    while(t--){
        ll x,y; cin>>x>>y;
        if(pow(x,4)+ (4*pow(y,2)) == (4*pow(x,2)*y)){
            cout<<"YES\n";
        }else cout<<"NO\n";
    }

    return 0;
}


