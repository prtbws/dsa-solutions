//Author : PRTBWS
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve() {

    int n,q;
    cin >> n >> q;

    vector<string>s(n);
    vector<vector<int>>pref(n+1, vector<int>(n+1, 0));


    for (int i = 0; i<n; i++) {

        cin >> s[i];
        for (int j = 0; j<n; j++) {
            pref[i+1][j+1] = pref[i+1][j] + pref[i][j+1] -pref[i][j] + (s[i][j] == '*');
        }
    }

    ll ans = 0;

    while(q--) {
        int x1,y1, x2, y2;

        cin >> y1 >> x1 >> y2 >> x2;

        ans = pref[y2][x2]
            - pref[y1 - 1][x2]
            - pref[y2][x1 - 1]
            + pref[y1 - 1][x1 - 1];

        cout << ans << endl;
    }
    
    

    //int n;
    //cin >> n;

    //vector<int> a(n);
    //for (int i = 0; i < n; i++) {
    //    cin >> a[i];
    //}

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