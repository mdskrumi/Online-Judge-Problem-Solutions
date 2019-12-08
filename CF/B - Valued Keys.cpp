#include<bits/stdc++.h>
using namespace std;

int main(){

       string x , y , z;

       cin >> x >> y;

        for(int i = 0 ; i < x.size() ; i++){

            if(x[i] < y[i]){
                cout << -1 << endl;
                return 0;
            }
            if(x[i]>y[i]){
                    z+=y[i];

            }
            if(x[i]==y[i]){
                z+=x[i];
            }
        }
        for(int i = 0 ; i < z.size(); i++){
            cout << z[i];
        }cout <<endl;




return 0;
}
