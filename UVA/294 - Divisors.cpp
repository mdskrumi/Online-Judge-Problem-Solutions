#include<bits/stdc++.h>
using namespace std;
int div(int a);
int main(){

        int t, num1 , num2 , coun , maxcoun , mnum , one , two;
        cin>>t;
        while(t--){
            coun = 0;
            cin>> num1 >> num2;
            one = num1;
            two = num2;
            mnum = num1;
            for(num1;num1<=num2;num1++){
                maxcoun = div(num1);
                if(maxcoun > coun){
                    coun = maxcoun;
                    mnum = num1;
                }

            }cout <<"Between "<<one<<" and "<<two<<", "<<mnum<<" has a maximum of "<<coun<<" divisors."<<endl;
        }
return 0;
}
int div(int n){
    int c = 1;
    int sq = (int)sqrt(n);
    for (int i = 2; i <= sq; i = (i == 2 ? 3 : i + 2)) {
        int pow = 0;
        while (n % i == 0) {
            pow++;
            n /= i;
        }

        if(pow != 0) {
            c *= pow + 1;
            sq = (int)sqrt(n);
        }
    }
    if (n != 1)
        c*= 1 + 1;

    return c;
}



