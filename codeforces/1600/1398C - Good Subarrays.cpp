//Author : PRTBWS
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve() {

    int n;
    cin >> n;

    string a;
    cin >> a;

    vector<int>pre(n+1, 0);

    for (int i=1; i<n+1; i++) {

        pre[i] = pre[i-1]+(a[i-1]-'0');
    }


    map<ll,ll> mp;

    for (int i = 0; i<=n; i++) {

        mp[pre[i]-i]++;
    }

    ll ans = 0;

    for (auto x : mp) {

        ans += x.second*(x.second-1)/2;
    }

    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //freopen("bcount.in", "r", stdin);
    //freopen("bcount.out", "w", stdout);

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}