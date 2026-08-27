//Author : PRTBWS
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){

    ll a, b, p, q , r;

    cin >> a >> b >> p >> q >> r;

    ll ans = LLONG_MAX;

    for (ll d = 0; d<=min(a,b); d++){

        ll horizontalMoves = (a-d + 1) / 2;
        ll verticalMoves = (b-d+ 1) / 2;

        ll cost = d*r + horizontalMoves*p + verticalMoves*q;

        ans = min(ans, cost);
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