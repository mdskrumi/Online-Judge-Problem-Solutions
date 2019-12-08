#include<bits/stdc++.h>
using namespace std;

int main(){
   //  freopen("input.txt", "r" , stdin);
   //  freopen("output.txt", "w" , stdout);

    float s , v1 , v2 , t1 , t2 ;
    while(scanf("%f%f%f%f%f",&s,&v1,&v2,&t1,&t2)!=EOF){
        float ft = t1+ t1 + s*v1;
        float sc = t2+t2 + s*v2;
      //  cout << ft << " " << sc <<endl;
        if(ft<sc){
            printf("First\n");
        }
        else if(ft>sc){
            printf("Second\n");
        }
        else{
            printf("Friendship\n");
        }
    }

return 0;
}
