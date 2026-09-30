#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    int a[105];

    for (int i = 0; i < m; i++)
        cin >> a[i];

    int cnt = m;

    for (int p = 0; p < k; p++) {
        for (int seat = 1; seat <= n; seat++) {

            bool taken = false;

            for (int j = 0; j < cnt; j++) {
                if (a[j] == seat) {
                    taken = true;
                    break;
                }
            }

            if (!taken) {
                cout << seat << " ";
                a[cnt++] = seat;
                break;
            }
        }
    }

    cout << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t--)
        solve();
}