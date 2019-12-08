#include<bits/stdc++.h>
using namespace std;

int main(){
        int n ,m ,t ,i, cck ,on,tw,thr,fur,fiv,six,svn,eng,nin,zro;
    cin >> t ;
    while(t-->0){
            cin >> i ;
            cck=on=tw=thr=fur=fiv=six=svn=eng=nin=zro=0;

    for(m = 1 ; m <= i ; m++){
            n = m;
            while(n!=0){
               cck = n % 10;
               if(cck == 0){
                    zro++;
               }
               else if(cck == 1){
                on++;
               }
               else if(cck == 2){
                tw++;
               }
               else if(cck == 3){
                thr++;
               }
               else if(cck == 4){
                fur++;
               }
               else if(cck == 5){
                fiv++;
               }
               else if(cck == 6){
                six++;
               }
               else if(cck == 7){
                svn++;
               }
               else if(cck == 8){
                eng++;
               }
               else if(cck == 9){
                nin++;
               }
               n/=10;
            }
     }
        cout << zro << " " << on<< " "  << tw<< " "  << thr<< " "  << fur<< " "  << fiv<< " "  << six<< " "  << svn<< " "  << eng<< " "  << nin << endl;
    }

return 0;
}
