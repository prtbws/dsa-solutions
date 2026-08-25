//Author : PRTBWS
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){

    int n,m;
    cin >> n >> m;

    for (int i = 1;; i++) {
        if ((i-1)%n+1 > m){
            break;
        } else {
            m-=((i-1)%n+1);
        }
    }
    cout << m << endl;

    //vector<int>a(n);
    //for (int i=0; i<n; i++) {
        //cin >> a[i];
    //}

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