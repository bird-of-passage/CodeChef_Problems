// Journey of thousand miles starts with
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;



signed main(){
    int n, m; cin >> n >> m;

    map<string, string>Country;

    while(n--){
        string name, country; cin >> name >> country;
        Country[name] = country;
        // If name already exists in the Country map, its value will be updated to country.
        // If name doesn't exist, a new key-value pair will be added.
    }

    map<string, int>chefVotes;
    map<string, int>countryVotes;

    while(m--){
        string name; cin >> name;
        chefVotes[name]++;
        countryVotes[Country[name]]++;
    }

    int x = 0;
    string ans = "";

    for(auto [country, cnt]: countryVotes){
        if(cnt > x){
            x = cnt;
            ans = country;
        }
    }

    cout << ans << '\n';

    int y = 0;
    ans = "";
    for(auto [name, cnt]: chefVotes){
        if(cnt > y){
            y = cnt;
            ans = name;
        }
    }

    cout << ans << '\n';

    return 0;
}