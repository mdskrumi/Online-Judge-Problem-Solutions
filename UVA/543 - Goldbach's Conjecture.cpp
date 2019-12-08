#include<bits/stdc++.h>
#define N 1000000
using namespace std;
int primes[N];
void prime();
int main(){
    prime();
    int number , a , b , wa;
    while(cin >> number){
            if(number == 0){
                break;
            }
            wa = 1;
        for(a = 3 ; a <= number;a++){
            if(primes[a]==1){
               b = number - a;
               if(primes[b]==1){
                cout << number << " = " << a << " + "<< b <<endl;
                wa = 0;
                break;
               }
            }
        }if(wa==1)
        cout << "Goldbach's conjecture is wrong."<<endl;
    }

return 0;
}
void prime(){

    int i = 2;
    primes[0] = primes[1] = 0;
    for(i;i<=N;i++){
        primes[i] = 1;
    }

    for(i = 2 ; i <= sqrt(N);i++){
        if(primes[i]==1)
        for(int j = 2 ; i*j <= N;j++){
            primes[i*j] = 0;
        }
    }
    primes[2]=0;
}


