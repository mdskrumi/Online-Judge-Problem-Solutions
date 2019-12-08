#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;

void getclean();
int floydmama();
int node[23][23];
vector<string>names;
int n , m;

int main(){
        //Taking;Making;
        int kase = 1;
        string x;
        while(scanf("%d%d",&n,&m)&& (n!=0)){
            getclean();
            for(int i = 0 ; i < n ; i++){
                cin >> x;
                names.pb(x);

            }
            for(int i = 0 ; i < m ; i++){
                int x , y , w;
                sf("%d%d%d",&x,&y,&w);
                node[x][y]= node[y][x] = w;
            }
            int ans = floydmama()-1;
            pf("Case #%d : ",kase++);
            cout << names[ans];
            pf("\n");
        }
return 0;
}
void getclean(){
    names.clear();
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n;j++){
            if(i!=j) node[i][j] = 99999;
            else node[i][j] = 0;
        }
    }
}
int floydmama(){
    for(int k = 1 ; k <= n ; k++)
        for(int i = 1 ; i <= n ; i++)
            for(int j = 1 ; j <= n ; j++)
                node[i][j] = min(node[i][j] , node[i][k]+node[k][j]);

    int hou, mou1 , mou2 = 99999;
    for(int i = 1 ; i <= n ; i++){
        mou1 = 0 ;
        for(int j = 1 ; j <= n ; j++){
            if(node[i][j] < 99999){
           //    cout << i << " " << j << " " << node[i][j] <<endl;
               mou1+=node[i][j];
            }
        }
       /* int a = i-1;
        cout <<"Name " << names[a] << " " << mou1 <<endl;*/
        if(mou1 < mou2){
            mou2 = mou1;
            hou = i;
        }
    }
return hou;
}
