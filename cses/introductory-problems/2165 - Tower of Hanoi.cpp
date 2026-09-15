#include <bits/stdc++.h>
using namespace std;

void toh(int n, int a, int b, int c){

    if (n==0) return;
    // if (n==1){
    //     cout << 1 << " " << 3 << endl;
    //     return;
    // }

    toh(n-1, a, c, b);

    cout << a << " " << c << endl;

    toh(n-1, b, a, c);
}

int main(){

    int n;
    cin >> n;

    int moves = (1<<n)-1;
    

    cout << moves << endl;
    toh(n, 1, 2, 3);

    return 0;
}