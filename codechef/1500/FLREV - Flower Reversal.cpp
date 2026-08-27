//Author : PRTBWS
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){

    int n;
    cin >> n;

    string s;

    cin >> s;

    int ch = 0;
    for (int i = 1; i<n; i++) {
        if (s[i-1] != s[i]) ch++;
    }

    int ans;

    if (ch == 0) ans = n-1;
    else if (ch == 1 || ch == 2) ans = n-2;
    else ans = n-ch+1;
    
    cout << ans << endl;
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