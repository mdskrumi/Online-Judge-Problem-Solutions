#include<bits/stdc++.h>
using namespace std;

int letsgoo(int x,int y);

char area[22][22];
queue<pair <int ,int> >q;

int dx[]={1 ,-1, 0,  0 };
int dy[]={0 , 0, 1, -1 };
int R , C;

int main(){
    int t , kase = 1;
    scanf("%d",&t);
    while(t--){
        int x , y;
        scanf("%d%d",&C,&R);
        cin.ignore();
            for(int i = 0 ; i < R ; i++){
                for(int j = 0 ; j < C ; j++){
                    scanf("%c",&area[i][j]);
                    if(area[i][j]=='@'){
                        x = i;
                        y = j;
                    }
                }
                cin.ignore();
            }
            printf("Case %d: %d\n",kase++,letsgoo(x,y));
    }

return 0;
}
int letsgoo(int x ,int y){
    int ans = 1;
    pair<int ,int>p;
    p = make_pair(x,y);
    q.push(p);
    area[x][y] = '1' ;
    while(!q.empty()){
        p = q.front();
        q.pop();
        for(int i = 0 ; i <4 ; i++){
            x = p.first + dx[i];
            y = p.second + dy[i];
            if(area[x][y]!='1' && area[x][y]!='#' && x >=0 && x < R && y >=0 && y < C){
                area[x][y] = '1';
                q.push(make_pair(x,y));
                ans++;
            }
        }
        //cout <<"RUNNING\n";
    }
return ans;
}
