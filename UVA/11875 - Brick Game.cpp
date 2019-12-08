#include<bits/stdc++.h>
using namespace std;

int main(){

    int t, n , i=1;
    cin >> t;
    while(t-->0){
            cin >> n;
            int pl[n];
            for(int i = 0 ; i < n ; i++){
                    int tm;
                cin >> tm;
            pl[i]=tm;
            }
    cout <<"Case "<<i<<": " << pl[(n/2)] << endl;
    i++;

    }
return 0;
}




