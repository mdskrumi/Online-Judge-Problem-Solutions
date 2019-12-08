#include<bits/stdc++.h>
using namespace std;
int main(){
            int t;
            cin >>t;
            while(t-->0){
                int a , b ,c;
                cin >> a >> b >> c;

                if(a+b<=c || c+a <= b || b+c<=a){
                    cout <<"Wrong!!"<<endl;
                }else{
                    cout << "OK" <<endl;
                }

           }

return 0;
}
