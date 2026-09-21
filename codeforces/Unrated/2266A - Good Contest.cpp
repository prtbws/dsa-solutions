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

    int n;
     cin >> n;

    int a1, a2, a3;

    cin >> a1 >> a2 >> a3;

    int all = min({a1, a2, a3});

    cout << n - all << endl;

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