#include<bits/stdc++.h>
using namespace std;
int main(){

    int a , b , n;
    while(cin >> n){
        char win[n];
        cin >> win;
            a = b = 0 ;
        for(int i = 0 ; i < n; i++ ){
            if(win[i]=='A'){
                a++;
            }
            else{
                b++;
            }
        }
        if(a>b){
            cout << "Anton" << endl;
        }
        else if(b > a){
            cout << "Danik" << endl;
        }
        else{
            cout << "Friendship" << endl;
        }
    }


return 0;
}
