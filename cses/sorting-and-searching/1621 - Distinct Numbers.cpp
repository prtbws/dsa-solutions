#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    set<long long>st;
    for (int i=0; i<n; i++) {

        long long x;
        cin >> x;
        
        st.insert(x);
    }

    

    cout << st.size() << endl;

    return 0;
}