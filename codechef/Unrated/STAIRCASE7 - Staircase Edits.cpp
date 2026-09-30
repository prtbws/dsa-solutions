//Author : PRTBWS
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){

    int n;
    cin >> n;
    map<int, int>mp;

    vector<int>a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
        mp[a[i]-i]++;
    }

    int best = 0;

    for (auto x : mp) {

        best = max(best, x.second);
    }

    cout << n-best << endl;
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