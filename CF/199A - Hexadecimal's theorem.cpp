#include <bits/stdc++.h>
using namespace std;
void fibo();
long long fibos[100];
int main(){
    fibo();
    x:
    long long n;
    while(cin >> n){

        int t = 1;
        for(int i = 0 ; fibos[i] <= n; i++){
            for(int j = 0 ; fibos[j] <= n; j++){
                for(int k = 0 ; fibos[k] <= n; k++){
                    if(fibos[i]+fibos[j]+fibos[k] == n){
                        cout << fibos[i] << " "<< fibos[j] << " "<<fibos[k] << endl;
                        goto x;
                    }
                }
            }
        }if(1){
            cout << "I'm too stupid to solve this problem" <<endl;
        }
        t=1;
    }
    return 0;
}
void fibo(){
    fibos[0] = 0;
    fibos[1] = 1;
    for(int i = 2 ; i <= 70 ;i++){
        fibos[i] = fibos[i-1] + fibos[i-2];

    }
}
