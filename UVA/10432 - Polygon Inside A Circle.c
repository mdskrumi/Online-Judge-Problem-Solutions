#include<stdio.h>
#include<math.h>
#define pi acos(-1)
int main(){

        double r , n;
        while(scanf("%f %f",&r,&n)!=EOF){
        printf("%.3lf\n",.5*n*r*r*sin(2*pi/n));
        }
return 0;
}
