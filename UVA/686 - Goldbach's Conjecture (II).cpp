#include<bits/stdc++.h>
using namespace std;
bool prime(int a);
int main(){

        int number;
        int odd1,odd2,chck;
        while(cin>>number){
                if(number==0){
                    break;
                }
                if(number==4){
                    cout<< 1 <<endl;
                    continue;
                }
            odd1 = 3;
            odd2 = number;
            chck = 0;
            int primes[number];
            int index = 0;

            for(odd1;odd1<=odd2;odd1++){
               if(odd1%2==0){
                    continue;
                }
               if(prime(odd1)==true){
                    primes[index] = odd1;
                    index++;
                    }
                 else{
                    continue;
                }
            }
            for(int i = 0 ; i < index ; i++){
                for(int j = index-1 ; j>=i;j--){
                    if(primes[i]+primes[j]==number){
                        chck++;
                      //cout << primes[i] <<" + " << primes[j] << endl;
                    }
                }
            }cout << chck <<endl;

        }
return 0;
}
bool prime(int a){
    int i = 2;
    for(i; i < a/2 ;i++){
        if(a%i==0){
        return false;
        }
    }
return true;
}


