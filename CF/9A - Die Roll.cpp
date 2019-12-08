#include <bits/stdc++.h>
using namespace std;
int main(){

        int y ,w;
            while(cin >> y >>w){
                int num = max(y,w);
                if(num == 1){
                    cout << "1/1" <<endl;
                }
                else if(num==2){
                    cout << "5/6" <<endl;
                }
                else if(num==3){
                    cout << "2/3" <<endl;
                }
                else if(num==4){
                    cout << "1/2" <<endl;
                }
                else if(num==5){
                    cout << "1/3" <<endl;
                }
                else if(num==6){
                    cout << "1/6" <<endl;
                }

            }
return 0;
}
