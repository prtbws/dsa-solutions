//Author : PRTBWS
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){

    int n,k;
    cin >> n >> k;

    //vector<int>a(n);
    //for (int i=0; i<n; i++) {
        //cin >> a[i];
    //}

    for (int i = 0; i<n ;i++) {
        for (int j = 0; j<n; j++) {
            if (j==i) cout << k  << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
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