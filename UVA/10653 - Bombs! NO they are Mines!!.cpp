#include<bits/stdc++.h>
using namespace std;

int letsgoo(int x1 ,int y1 ,int x2 ,int y2);

int visited[1002][1002];
int cost[1002][1002];
queue<pair <int ,int> >q;

int dx[]={1 ,-1, 0,  0};
int dy[]={0 , 0, 1, -1};
int R , C;

int main(){
    while(scanf("%d%d",&R,&C) && R!=0 && C!=0){
        for(int i = 0 ; i < R ; i++){
            for(int j = 0 ; j < C ; j++){
                visited[i][j] = -1;
                cost[i][j] = 1000000;
            }
        }
     //   cout << "DONE SeTTING ONE\n";
        int r;
        scanf("%d",&r);
        for(int i = 0 ; i < r ; i++){
            int where , how , pos;
            scanf("%d %d",&where,&how);
            for(int j = 0 ; j < how ; j++){
                scanf("%d",&pos);
                visited[where][pos] = 420;
            }
        }
     //   cout << "DONE SeTTING TWO\n";
        int x1 , y1 , x2 , y2;
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        printf("%d\n",letsgoo(x1,y1,x2,y2));

    }

return 0;
}
int letsgoo(int x1 ,int y1 ,int x2 ,int y2){

    pair<int ,int>p;
    p = make_pair(x1,y1);
    q.push(p);
    cost[x1][y1] = 0;
    visited[x1][y1]=1;
    while(!q.empty()){
        p = q.front();

        q.pop();
        for(int i = 0 ; i < 4 ; i++){
            x1 = p.first + dx[i];
            y1 = p.second + dy[i];
            if(x1 < R && x1>=0 && y1 < C && y1 >=0 ){
                if(visited[x1][y1]!= 1 && visited[x1][y1]!=420){
                    visited[x1][y1] = 1;
                    q.push(make_pair(x1,y1));
                }
            cost[x1][y1] = min(cost[x1][y1] , cost[p.first][p.second]+1);
            }
        }
        //cout <<"RUNNING\n";
    }
return cost[x2][y2];
}
