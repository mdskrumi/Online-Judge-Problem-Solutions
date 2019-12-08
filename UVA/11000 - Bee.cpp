#include<iostream>
#include<math.h>
using namespace std;
int main(){

    long long year , m , f;
    while(cin >> year && year != -1){
            f = 1;
            m = 0;
            for(int i = 0 ; i < year ; i++){
                int x = m ;
                int y = (f-1);
                if(m>0){
                    m += m;
                    f += x;
                }
                if(f > 0){
                    m += (y+1);
                }
                m-=x;
                f-=y;
            }
            cout << m << " " << (f+m) <<endl;
        }
return 0;
}
