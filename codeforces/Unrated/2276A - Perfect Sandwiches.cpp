//Author : PRTBWS
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){

    int a, b;
    cin >> a >> b;

    cout << ((a <=b) ? -1 : min(b, a-b)) << endl;


    //int n;
    //cin >> n;

    //vector<int>a(n);
    //for (int i=0; i<n; i++) {
        //cin >> a[i];
    //}

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