#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        bool ck = 1;
        
        for(int i=0; i<n; i++){
            if(arr[i] < 5){
                ck = 0;
                break;
            }
        }

        if(ck) cout << "YES\n";
        else cout << "NO\n";


    }

    return 0;
}