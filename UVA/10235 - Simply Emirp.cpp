#include<bits/stdc++.h>
using namespace std;
int prime(long long x);
int main(){
        long long n ;
        while(cin >> n){
                long long number = n;
                long long temp , riv = 0;
                while(n!=0){
                    temp = n%10;
                    riv = (riv*10)+temp;
                    n/=10;
                }
                if(prime(number)==1 && prime(riv)==1 && number != riv ){
                    cout << number << " is emirp." << endl;
                }
                else if(prime(number)==1){
                    cout << number << " is prime." << endl;
                }
                else{
                    cout << number << " is not prime." << endl;
                }
        }
return 0;
}
int prime(long long x){
    for(int i = 2; i <= sqrt(x) ; i++){
        if(x % i==0){
            return 0;
        }
    }
return 1;
}
