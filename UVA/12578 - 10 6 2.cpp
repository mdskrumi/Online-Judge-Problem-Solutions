#include<bits/stdc++.h>
#define sq(x) x*x
#define pi acos(-1)
using namespace std;

int main(){

    int t,l;
    double r , w;
    cin >> t;
    while(t-->0){
        cin >> l;
        r = (double)l/5;
        w = 6 * (double)l /10;
        double ans1 =  sq(r)*pi;
        double ans2 = ((double)l*w)- ans1;
        printf("%.2f %.2f\n", ans1,ans2);
    }


return 0;
}
