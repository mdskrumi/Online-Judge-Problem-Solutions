#include<bits/stdc++.h>
using namespace std;

int main(){

    int t, n;
    while(1){
        n=0;
        cin >> t;
        if(t==0){
            break;
        }
        for(t;t>=1;t--){
            n += t*t;
        }
    cout << n << endl;
    }
return 0;
}




