#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<long long>a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    long long ans = 0;

    for (int i = 1; i<n; i++){
        ans += max(1LL*0, a[i-1]-a[i]);
        a[i] = max(a[i-1], a[i]);
    }
    cout << ans << endl;
}