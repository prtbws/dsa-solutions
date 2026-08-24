//Author : PRTBWS
#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve(){

    int n;
    cin >> n;

    vector<int>a(n-1);
    for(int i=0; i<n-1; i++) cin >> a[i];

    int sum = 0;
    // int mx = 0, mn = INT_MAX;
    for(auto x : a){
        sum += x;
    }
    int exp = n*(n+1)/2;
    cout << exp - sum << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while(t--)
        solve();

    return 0;
}