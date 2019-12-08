#include<bits/stdc++.h>
using namespace std;
int digits(long long i);
int main(){

    long long n , temp;
    long long ans;

    int t ;
    scanf("%d",&t);

    while(t-->0){
        cin >> n;
        temp = n;
        ans = 0;
        while(n!=0){
            int rem = n%10;
            ans += pow(rem,digits(temp));
            n/=10;
        }
        if(temp == ans){
            printf("Armstrong\n");
        }
        else{
            printf("Not Armstrong\n");
        }
    }
return 0;
}
int digits(long long i){
    if(i<10)return 1;
    else if(i<100)return 2;
    else if(i<1000)return 3;
    else if(i<10000)return 4;
    else if(i<100000)return 5;
    else if(i<1000000)return 6;
    else if(i<10000000)return 7;
    else if(i<100000000)return 8;
    else if(i<1000000000)return 9;
    else if(i<10000000000)return 10;
    else return 0;

}
