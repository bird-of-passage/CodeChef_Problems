#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        double x,y; cin>>x>>y;
        if((x/2) <= (y/4)){
            cout<<x*5<<endl;
        }
        else if((x/2) >= (y/4)){
            cout<<y*2 + x<<endl;
        }
    }

    return 0;
}

