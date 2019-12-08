#include<bits/stdc++.h>
using namespace std;
int main(){
  /* freopen("A-small-attempt3.in", "r", stdin);
    freopen("output.in", "w", stdout);*/
    int a , b , c = 5000 , r , rat = 0 , unrat = 0;
    cin >> r;
    while(r--){
        cin >> a >> b;
        if((a-b)!=0){
            rat = 1;
        }
        if(c >= b){
            c = b;
        }
        else{
            unrat = 1;
        }
    }
    if(rat == 1){
        cout << "rated\n";
    }
    else if(unrat == 1){
        cout << "unrated\n";
    }
    else{
        cout << "maybe\n";
    }





return 0;
}
