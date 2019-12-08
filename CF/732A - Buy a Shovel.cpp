#include<bits/stdc++.h>
using namespace std;
int main(){
    int k , r ;
    while(cin >> k >> r){
            for(int i = 1 ; ; i++){
                if(((k*i)% 10 == 0) || ((k*i)-r)%10 == 0){
                    cout << i <<endl;
                    break;
                }
            }

        }

return 0;
}
