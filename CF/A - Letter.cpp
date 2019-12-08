#include<bits/stdc++.h>
using namespace std;
int main(){

    int n , m;
    cin >> n >> m;
    char rect[n][m];
    int a = 100, b = 100, c = 0 , d = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> rect[i][j];
            if(rect[i][j]=='*' && a >= i){
                a = i;

            }
            if(rect[i][j]=='*' && b >= j){
                b = j;

            }
            if(rect[i][j]=='*' && i > c ){
               c = i;
            }
            if(rect[i][j]=='*'&& d < j){
                d = j;
            }
        }
    }

    for(int i = a ; i <= c ; i++){
        for(int j = b ; j <= d ; j++){
            cout << rect[i][j];
        }cout << endl;
    }

return 0;
}
