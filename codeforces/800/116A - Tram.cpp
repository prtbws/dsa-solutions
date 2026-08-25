//Author : PRTBWS
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){

    int n;
    cin >> n;

    // vector<int>a(n), b(n);

    int a = 0, b = 0;

    int minimum_capacity = 0, capacity = 0;

    for (int i=0; i<n; i++) {
        cin >> a >> b;
        capacity = capacity-a+b;
        minimum_capacity = max(capacity, minimum_capacity);
    }

    cout << minimum_capacity << endl;
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