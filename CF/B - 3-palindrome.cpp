#include<bits/stdc++.h>
using namespace std;
int main(){
  /* freopen("A-small-attempt3.in", "r", stdin);
    freopen("output.in", "w", stdout);*/
    long long n;
    cin >> n;
    string name = "";

    for(;;){
        name+="aabb";
        if(name.size()>= n){
            break;
        }
    }
    for(long long i = 0 ; i < n ; i++){
        printf("%c",name[i]);
    }printf("\n");


return 0;
}
