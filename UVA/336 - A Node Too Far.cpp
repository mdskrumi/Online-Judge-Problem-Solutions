#include<bits/stdc++.h>
using namespace std;
int main(){

    map<int , vector<int> > G;
    map<int , vector<int> > :: iterator it;
    queue< int > q;
    map<int , pair<int ,int > > dupnodewithcostandvis;
    map<int , pair<int ,int > > :: iterator ita;
    int e , kase = 1;
    int x , y;
    while(scanf("%d",&e) && e!= 0){
        for(int i = 0 ; i < e ; i++){
            scanf("%d%d",&x,&y);
            G[x].push_back(y);
            G[y].push_back(x);
        }
        while(1){
       // cout << "INITIALILY : \n";
        int i = 0;
        for(it = G.begin();it!=G.end();it++){
            dupnodewithcostandvis[it->first] = make_pair(10000,0);
            //cout << "NODE : " << it->first<< " COST : " << dupnodewithcostandvis[it->first].first << " VISITED : " << dupnodewithcostandvis[it->first].second << endl;
        }
       // cout << "\n\n";
            scanf("%d%d",&x,&y);
            if(x==0 && y==0)break;

            q.push(x);
            dupnodewithcostandvis[x].first = 0;
            while(!q.empty()){
                int working = q.front();
                q.pop();
                dupnodewithcostandvis[working].second = 1;

               /* cout << "WORKING WITH : " << working <<endl;
                cout << "COST " << dupnodewithcostandvis[x].first <<endl;
                cout << "VISITED " << dupnodewithcostandvis[x].second <<endl;*/

                for(int i = 0 ; i < G[working].size() ; i++){
                    if(dupnodewithcostandvis[G[working][i]].second != 1){
                      //  cout << "GOING TO " << G[working][i]<< " COST OF ITS " << dupnodewithcostandvis[G[working][i]].first;
                        q.push(G[working][i]);
                        dupnodewithcostandvis[G[working][i]].first = min(dupnodewithcostandvis[working].first + 1 , dupnodewithcostandvis[G[working][i]].first );
                       // cout << "NEW COST : " << dupnodewithcostandvis[G[working][i]].first <<endl;
                    }
                }
            }
            int ans = 0;
            for(it = G.begin() ; it != G.end() ; it++){
                if(dupnodewithcostandvis[it->first].first > y){
                    ans++;
                }
            }
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",kase++,ans,x,y);
            dupnodewithcostandvis.clear();

        }
        G.clear();
    }

return 0;
}

