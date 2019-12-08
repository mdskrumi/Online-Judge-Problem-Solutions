#include<bits/stdc++.h>
using namespace std;

#define sq2(x) x*x
#define sq3(x) x*x*x
#define pi acos(-1)

int main(){

        int t , c , r;
        char a;
        cin >> t;
        while(t-->0){
            cin >> a >> c >> r;
            if(a =='K'){
                int oddc=0 , oddr=0;
                for(int i = 0 ; i <= c ; i++){
                    if(i%2==0)continue;
                    else oddc++;
                }
                for(int i = 0 ; i <= r ; i++){
                    if(i%2==0)continue;
                    else oddr++;
                }
                cout << (oddc*oddr) <<endl;
            }
            else if (a == 'Q' || a=='r'){
                cout << c <<endl;
            }
            else{
                int road = c*r;
                if(road%2==1){
                    road++;
                }
                cout << road/2 <<endl;
            }

        }

return 0;
}
