#include<bits/stdc++.h>
using namespace std;
int main(){

    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int L = ((k*l)/n)/nl;
    int C = (c*d)/n;
    int S = (p/np)/n;

    cout << min(L,min(C,S)) <<endl;


return 0;
}

