#include<bits/stdc++.h>
using namespace std;
int main(){

    int a , b , c;
    while(cin >> a >> b >> c){
        int m = 0 , n = 0 ,o = 0;
        while(1){
            if((a-1) < 0 || (b-2) < 0 || (c-4) < 0){
                break;
            }
            a-=1;
            m += 1;
            b -= 2;
            n += 2;
            c -=4;
            o += 4;
        }
    cout << (m+n+o) << endl;
    }
return 0;
}
