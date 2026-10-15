//Author : PRTBWS
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){

    int n,k;
    cin >> n >> k;

    vector<ll>p(n+1, 0);

    for (int i=1; i<=n; i++) {
        ll x;
        cin >> x;

        p[i] = (p[i-1]+x)%k;
    }
    vector<int>cnt(k,0);
    ll ans = 0;

    for(int r = k+1; r<=n; r++) {

        cnt[p[r-k-1]]++;
        ans+= cnt[p[r]];
    }

    cout << ans << endl;

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while(t--)
        solve();

    return 0;
}