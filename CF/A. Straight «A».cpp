#include<bits/stdc++.h>
using namespace std;
int find_ans(vector<int>x , int qu);
int main(){
     //freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int n , k , sum , m;
    while(scanf("%d%d",&n,&k)!=EOF){
        sum = 0;
        for(int i = 0 ; i < n ; i++){
            scanf("%d",&m);
            sum +=m;
        }
        float fm = (float)sum/n;
        int pass = round(fm);
        int kount = 0;

        while(pass!=k){
            sum+=k;
            n++;
            kount++;
            fm =(float) sum/n;
            pass = round(fm);
            //cout << pass << "   " <<   sum/n  <<"  "  << kount <<endl;
        }

        printf("%d\n",kount);
    }


return 0;
}
