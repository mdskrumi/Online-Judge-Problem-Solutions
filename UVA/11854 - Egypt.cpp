#include<bits/stdc++.h>
#define sq(x) x*x
using namespace std;

int main(){

    int a , b ,c ;

    while(cin >> a >> b >> c && (a>0 && b>0 && c>0 )){

        if(sq(a) == sq(b)+sq(c)){
            printf("right\n");
        }
        else if(sq(b) == sq(a)+sq(c)){
            printf("right\n");
        }
        else if(sq(c) == sq(a)+sq(b)){
            printf("right\n");
        }
        else{
            printf("wrong\n");
        }

    }

return 0;
}
