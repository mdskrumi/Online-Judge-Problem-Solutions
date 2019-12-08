#include<bits/stdc++.h>
using namespace std;
int main(){
  /* freopen("A-small-attempt3.in", "r", stdin);
    freopen("output.in", "w", stdout);*/
    int n;
    while(cin >> n){

    if(n==1){
        cout << 0 <<endl;
    }
    else if(n%2==0){
        cout << (n/2) - 1 <<endl;
    }
    else{
        cout << (n/2) <<endl;
    }
    }
return 0;
}
