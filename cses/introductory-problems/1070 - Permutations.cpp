#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    if (n==1) {
        cout << 1 << endl;
        
    } else if (n==4) {
        cout << 2 << " " << 4 <<" "<< 1 <<" "<< 3 << endl;
    } else if (n > 1 && n < 5) {
        cout << "NO SOLUTION\n";
    } else {
        vector<int> a(n);
        int j = 0;
        for (int i=1 ; i<=n; i+=2){
            a[j] = i;
            j++;
        } 
        for (int i=2 ; i<=n; i+=2){
            a[j] = i;
            j++;
        } 

        for (int i=0; i<n; i++) {
            cout << a[i] << " ";
        } cout << endl;
    }
     
}