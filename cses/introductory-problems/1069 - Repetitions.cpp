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

    string s;

    cin >> s;
    int c= 1, ans = 1;

    for (int i = 1; i<s.size(); i++) {
        if (s[i-1] == s[i]) c++;
        else c = 1;

        ans  = max(ans, c);
    }

    cout << ans << endl;

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