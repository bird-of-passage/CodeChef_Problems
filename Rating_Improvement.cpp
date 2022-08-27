#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,n,x;

    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>n>>x;

        x*=3;

        int ans=n/x;

        cout<<ans<<"\n";

    }
    return 0;
}