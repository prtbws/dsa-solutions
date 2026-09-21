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

    if (s[0] == '1'){
        int z = 0;
        for (char c : s) {
            if (c == '0') z++;

        }

        cout << z << endl;
        return;
    }

    int p = -1;

    for (int i=0;i<n; i++) {
        if (s[i] == '1'){
            p = i;
            break;
        }
    }

    if (p == -1) {
        cout << 0 << endl;
        return;
    }

    vector<int> s0(n+1, 0);
    for (int i= n-1; i>=0; i--) {
        s0[i] = s0[i+1] + (s[i] =='0' ? 1 : 0);
    }
    
    int p1 =0;

    int minOps = n;

    for (int k = p; k<=n; k++){
        minOps = min(minOps, p1+s0[k]);
        if (k<n && s[k] == '1') p1++;
    }

    cout << minOps << endl;
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