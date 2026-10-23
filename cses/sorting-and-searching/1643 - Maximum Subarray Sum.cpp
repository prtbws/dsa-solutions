//Author : PRTBWS
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve() {

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
       cin >> a[i];
    }

    vector<ll>pre(n+1, 0);

    for (int i=  1; i <= n; i++) {
        pre[i]  = pre[i-1]+a[i-1];
    }

    ll max_subarray_sum = a[0];
    ll min_prefix_sum = 0;

    for (int i=1; i<=n; i++) {

        max_subarray_sum = max(max_subarray_sum, pre[i]-min_prefix_sum);
        min_prefix_sum = min(min_prefix_sum, pre[i]);
    }

    cout << max_subarray_sum << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //freopen("bcount.in", "r", stdin);
    //freopen("bcount.out", "w", stdout);

    int t = 1;
    //cin >> t;
    while (t--)
        solve();

    return 0;
}