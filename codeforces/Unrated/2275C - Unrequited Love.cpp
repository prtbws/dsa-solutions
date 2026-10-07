//Author : PRTBWS
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){

    int n;
    cin >> n;

    vector<int>a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    vector <int>love(n);
    for (int i=0; i< n-4; i++) {
        love[i] = a[i]+a[i+2]-a[i+4];
    }

    ll ans = 0;

    map<ll, ll>freq;
    for (int i = 0; i< n-4; i++) {
        freq[love[i]]++;
    }

    for (auto &x : freq) {
        ll cnt = x.second;
        ans += cnt*(cnt-1)/2;
    }

    for (int i = 0; i<n-4; i++) {
        if (i+2 < n-4 && love[i] == love[i+2]) ans--;
        if (i+4 < n-4 && love[i] == love[i+4]) ans--;
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