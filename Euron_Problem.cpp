#include<bits/stdc++.h>
using namespace std;
#define int long long

#define mxn 100005

int arr[mxn], tmp[mxn];

int merge(int l, int mid, int r){
    int i = l, j = mid + 1, k = 0;
    int inv = 0;

    while(i <= mid and j <= r){
        if(arr[i] <= arr[j]) tmp[k++] = arr[i++];
        else tmp[k++] = arr[j++], inv += mid - i + 1;
    }

    while(i <= mid) tmp[k++] = arr[i++];
    while(j <= r) tmp[k++] = arr[j++];
    
    k = 0;
    for(i = l; i <= r; ++i) arr[i] = tmp[k++];
    return inv;
}

int mrgSort(int l, int r){
    if(l == r) return 0;

    int mid = (l + r) / 2;
    int a = mrgSort(l, mid);
    int b = mrgSort(mid+1, r);
    int c = merge(l, mid, r);

    return a + b + c;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    
    for(int i = 0; i < n; ++i) cin >> arr[i];

    int ans = mrgSort(0, n-1);
    cout << ans << '\n';

    return 0;
}