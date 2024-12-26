#include<bits/stdc++.h>
using namespace std;
#define int long long

/*
Fences --> NxM grid
N, M ~ 10^9 (iterating over the grid isn't possible)

every grid cell has two possible states,
cell can have a plant -> X
cell can have a weed -> .

Goal -> Build fences

Fences should be built such that,
there should always be a fence between (a plant and a weed)
there should be a fence between (a plant and the outside of the grid)

For every plant, check its adjacent neighbor
your plant is in cell(x, y)

then check (x, y+1) if its outside/weed, build a fence ans++
and just do the same thing for (x+1, y), (x-1, y) and (x, y-1)

*/


signed main(){
    int t; cin >> t;
    while(t--){
        int n, m, k, x, y; 
        cin >> n >> m >> k;
        
        set<pair<int, int>>s;

        for(int i = 0; i < k; ++i){
            cin >> x >> y;
            s.insert({x, y});
        }

        int cnt  = 0;
        for(auto it = s.begin(); it != s.end(); it++){
            int x = it -> first;
            int y = it -> second;

            // if the adjacent cell isn't a plant
            if((s.find({x+1, y})) == s.end()) cnt += 1;
            if((s.find({x-1, y})) == s.end()) cnt += 1;
            if((s.find({x, y+1})) == s.end()) cnt += 1;
            if((s.find({x, y-1})) == s.end()) cnt += 1;
        }

        cout << cnt << '\n';
    }

    return 0;
}