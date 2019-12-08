#include<bits/stdc++.h>
using namespace std;
int main(){

    long long t , a , c , x ;
    cin>> t ;
    int kas = 1;
    while(t-->0){
            int sol = 0;
            cin >> x ;
            for(long i = 2 ; i < x ; i++){
                if(x % i == 0 && sol == 0){
                    a = i;
                    sol++;
                }
                else if (x % i == 0){
                    c = i;
                    sol++;
                }
                if(sol==2){
                    break;
                }
            }
        cout <<"Case #"<< kas <<": " <<x<< " = " << a << " * " << x/a << " = "<< c <<" * " << x/c << endl;
        kas++;
    }
return 0;
}
