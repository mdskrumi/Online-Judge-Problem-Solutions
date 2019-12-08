#include<bits/stdc++.h>
using namespace std;

void floydmama();
void getclean();

int node[101][101];
set<int>s;
double ans;


int main(){
        int x , y , kase = 1;
        while(1){
            getclean();
            while(scanf("%d%d",&x,&y) && x!=0 &&y!=0){
                s.insert(x);
                s.insert(y);
                node[x][y] = 1;
            }
            int sz = s.size();
            if(sz==0){
                break;
            }
            floydmama();
           // cout << ans <<endl;
            double d = (ans)/(sz*(sz-1));
            printf("Case %d: average length between pages = %.3lf clicks\n",kase++,d);
        }

return 0;
}

void floydmama(){
    ans = 0;
    for(int k = 0 ; k < 101 ; k++){
        for(int i = 0 ; i < 101 ; i++){
            for(int j = 0 ; j< 101 ; j++){
                node[i][j] = min(node[i][j] , node[i][k]+node[k][j]);
            }
        }
    }
    for(int i = 0 ; i < 101 ; i++){
        for(int j = 0 ; j < 101 ; j++){
            if(node[i][j]<9999){
              //  cout << "I :" << i << " J :" << j << " COST :" << node[i][j] <<endl;
                ans+=node[i][j];
            }
        }
    }
}
void getclean(){
for(int i = 0 ; i < 101 ; i++){
    for(int j = 0 ; j < 101 ; j++){
        if(i!=j)
            node[i][j] = 9999;
        else
            node[i][j] = 0;
    }
}
s.clear();
}
