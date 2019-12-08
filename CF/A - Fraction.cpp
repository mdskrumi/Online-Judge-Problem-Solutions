#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
#define pb push_back
using namespace std;
int ifprime(int n1 , int n2);

int main(){

    int n;
    while(cin >> n){
        int up , down;
        for(int i = n/2 ; i > 0 ; i--){
            if(ifprime(i , n-i)){
                up = i , down = n-i;
                cout << up << " " <<down <<endl;
                break;
            }
        }

    }

return 0;
}
int ifprime(int n1 , int n2){

for(int i = 2 ; i <= n1;i++){
    if(n1%i == 0 && n2 % i == 0 ){
        return 0;
    }
}
return 1;
}
