#include<bits/stdc++.h>
using namespace std;

int main(){

        char lock[9];
            for(int i = 0 ; i < 9 ; i++){
                cin >> lock[i];
            }
            int ans = 1;
            for(int i = 0 ; i < 5 ; i++){
                if(lock[i]!=lock[8-i]){
                    ans = 0;
                    break;
                }
            }
            if(ans == 1){
                cout << "YES" <<endl;
            }
            else{
                cout << "NO" <<endl;
            }
return 0;
}
