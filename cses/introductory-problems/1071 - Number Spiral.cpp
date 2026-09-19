//Author : PRTBWS
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){

    //int n;
    //cin >> n;

    //vector<int>a(n);
    //for (int i=0; i<n; i++) {
        //cin >> a[i];
    //}

    ll y,x;

    cin >> y >> x;

    ll ans;

    if (y>x) {

        if (y%2) {

            ans = (y-1)*(y-1) + x;

        } else {

            ans = y*y - (x-1);
        }
    } else {

        if (x%2){

            ans = x*x - (y-1);

        } else {
            ans = (x-1)*(x-1) + y;
        }
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