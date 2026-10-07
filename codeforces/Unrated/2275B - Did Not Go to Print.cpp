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

    stack <int>st;

    vector<bool>p(n+1, false);

    for (int i=1; i<=n; i++) {

        if (s[i-1] == '1'){
            st.push(i);
        } else if (s[i-1] == '2') {
            if (!st.empty()) {
                int x = st.top();
                st.pop();

                p[x] = true;

            } else p[i]= true;
        } else if (s[i-1] == '3'){
            p[i] = true;
        }

    }

    vector<int>np;

    for (int i=1; i<=n; i++) {
        if (!p[i]){
            np.pb(i);
        }
    }

    cout << np.size() << endl;

    for (int x : np) {
        cout << x << ' ';
    }

    cout << endl;

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