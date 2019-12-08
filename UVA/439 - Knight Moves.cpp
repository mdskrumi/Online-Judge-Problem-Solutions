#include<bits/stdc++.h>
using namespace std;

int letsgoo(int x1 , int y1 , int x2 , int y2);

int dx[]={1 , 1, -1, -1 , 2 , 2, -2, -2};
int dy[]={2 ,-2,  2, -2 , 1, -1,  1, -1};

queue<pair<int , int> >q;
int visit[9][9];
int cost[9][9];

int main(){

    string a , b;
    while(cin >> a >> b){

        for(int i = 0 ; i < 9 ; i++){
            for(int j = 0 ; j < 9 ; j++){
                visit[i][j] = -1;
                cost[i][j] = 100;
            }
        }


        int x1 = a[0] - 96;
        int y1 = atoi(&a[1]);

        int x2 = b[0]  - 96 ;
        int y2 = atoi(&b[1]);

    //    cout << "X1 " << x1<< " Y1 " << y1<< "  X2 " << x2<< "  Y2 " << y2 << endl;

        cout << "To get from " << a << " to " << b << " takes " << letsgoo(x1,y1,x2,y2) << " knight moves.\n";
      // printf("To get from %s to %s takes %d knight moves.\n",a,b,letsgoo(x1,y1,x2,y2));

    }
return 0;
}
int letsgoo(int x1 , int y1 , int x2 , int y2){

    pair <int , int> p;
    p = make_pair(x1,y1);
    q.push(p);
    cost[x1][y1] = 0;
    while(!q.empty()){
        visit[p.first][p.second] = 1;
        p = q.front();
        q.pop();
        for(int i = 0 ; i < 8 ; i++){
            x1 = p.first + dx[i];
            y1 = p.second + dy[i];
            if(x1<9 && y1 < 9 && x1 > 0 && y1 > 0){
                if(visit[x1][y1]!=1){
                    q.push(make_pair(x1,y1));
                }
                cost[x1][y1] = min(cost[x1][y1] , cost[p.first][p.second]+1);
            }
        }
    }

return cost[x2][y2];
};



