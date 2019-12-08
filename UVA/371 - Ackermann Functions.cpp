#include<bits/stdc++.h>
using namespace std;
int arekka(long long x);
int main(){
        int n;
        long long l , h , v , low , high;
        while(cin >> l >> h){
                if(l == 0 && h ==0){
                    break;
                }
                if(l<h){
                        low = l;
                        high = h;
                }else{
                    low = h;
                    high = l;
                }
                n = 0;
            for(long long i = low ; i <= high;i++){
                if(arekka(i)>n){
                    v = i;
                    n = arekka(i);
                }
            }
            cout <<"Between " << low << " and " << high << ", " << v << " generates the longest sequence of " << n << " values." << endl;
        }

return 0;
}
int arekka(long long x){
    int m = 0;
    if(x==1){
            m = 3;
        return m;
    }
    while(x!=1){
        if(x%2==1){
            x = (x*3) + 1;
        }
        else{
            x/=2;
        }
        m++;
    }
return m;
}



