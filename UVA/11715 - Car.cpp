#include<bits/stdc++.h>
using namespace std;
int main(){

        int n , kase = 1;
           while(cin >> n){
            if(n==1){
                double u,v,t,a,s;
                cin >> u >> v >> t;

                a = (v-u)/t;
                s = (u*t) + (.5*(a*t*t));

                printf("Case %d: %.3lf %.3lf\n",kase++,s,a);
            }
            else if(n==2){
                double u,v,a,s,t;
                cin >> u >> v >> a;

                    t = (v-u)/a;
                    s = (u*t) + (.5*(a*t*t));
                    printf("Case %d: %.3lf %.3lf\n",kase++,s,t);
            }
            else if (n==3){
                double u,s,a,v,t;
                cin >> u >> a >> s;

                v = sqrt((u*u)+(2*a*s));
                t = (v-u)/a;
                printf("Case %d: %.3lf %.3lf\n",kase++,v,t);
            }
            else if (n==4){
                double v,a,s,u,t;
                cin >> v >> a >> s;
                u = sqrt((v*v)-(2*a*s));
                t = (v-u)/a;
                printf("Case %d: %.3lf %.3lf\n",kase++,u,t);
            }
           else if(n==0){
                return 0;
            }

           }
return 0;
}
