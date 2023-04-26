#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int x; cin>>x;
        if(x>=0 && x<=4) cout<<100-0<<endl;
        else if(x>=5 && x<=14) cout<<100-10<<endl;
        else if(x>=15 && x<=24) cout<<100-20<<endl;
        else if(x>=25 && x<=34) cout<<100-30<<endl;
        else if(x>=35 && x<=44) cout<<100-40<<endl;
        else if(x>=45 && x<=54) cout<<100-50<<endl;
        else if(x>=55 && x<=64) cout<<100-60<<endl;
        else if(x>=65 && x<=74) cout<<100-70<<endl;
        else if(x>=75 && x<=84) cout<<100-80<<endl;
        else if(x>=85 && x<=94) cout<<100-90<<endl;
        else cout<<'0'<<endl;
    }

    return 0;
}


