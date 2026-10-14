//Author : PRTBWS
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){

    string s;
    cin >> s;

    int n=  s.size();

    int k = 1;

    for (int i=0; i<n-1; i++) {
        if (s[i] != s[i+1]) k++;
    }

    bool canMinus = false;
    bool canPlus = false;

    for (int i = 1; i<n-1; i++) {

        if (s[i-1] == s[i+1] && s[i] != s[i-1]) {
            if (k >= 3) canMinus = true;
        }

        if (s[i-1] == s[i] && s[i] == s[i+1]) {
            canPlus = true;
        }
    }

    cout <<  1+canMinus+canPlus << endl;

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