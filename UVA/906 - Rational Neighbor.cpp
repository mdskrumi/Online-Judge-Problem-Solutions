#include<bits/stdc++.h>
using namespace std;

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

        long long a , b , c , d ;
        double n ;
        long double fst , scd;
        while(scanf("%lld %lld",&a,&b)!=EOF){
            scanf("%lf",&n);
            fst = (long double)a/b;
            d = 1;
           // cout << fst;
            while(1){
                c = (long long)(fst*d);
                if(a*d >= b*c){
                    c++;
                }
               // puts("WORKING");
                scd = (long double)c/d;
               // cout << scd <<endl;
                if(scd-fst <= n && (scd > fst)){
                    printf("%lld %lld\n",c,d);
                    break;
                }
            d++;
            }

        }
return 0;
}
