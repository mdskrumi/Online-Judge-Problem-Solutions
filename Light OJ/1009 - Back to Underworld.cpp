#include<bits/stdc++.h>
using namespace std;

int letsgoo(int x);

vector<int>v[20005];
queue<int>q;
set<int>sa , da;
set<int> :: iterator it;

int visited[20005];
int col[20005];


int main(){

/*  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);*/

    int t , kase = 1 , n;
    scanf("%d",&t);
    while(t--){
        int x , y;
        sa.clear();
        for(int i = 0 ; i < 20005 ; i++){
            visited[i] = -1;
            col[i]  = -1;
        }
        scanf("%d",&n);
        for(int i = 0 ; i < n ;i++){
            scanf("%d%d",&x,&y);
            v[x].push_back(y);
            v[y].push_back(x);
            sa.insert(x);
            sa.insert(y);
            da.insert(x);
            da.insert(y);
        }
        int ans = 0;
        while(!sa.empty()){
            ans += letsgoo(*sa.begin());
        }
        printf("Case %d: %d\n",kase++,ans);

        for( it = da.begin(); it!=da.end();it++){
            v[*it].clear();
        }

    }
return 0;
}
int letsgoo(int x){
    int va = 1 , l = 0;
    q.push(x);
    col[x] = 1;
    while(!q.empty()){
        int working = q.front();
        q.pop();
        visited[working] = 1;
        it = sa.find(working);
        if(it!=sa.end()){
            sa.erase(it);
           // cout << "Erased SUC .... NOW SIZE " << sa.size() <<endl;
        }

     //   cout << "COIMING FROM " << working << " ITS COLOUR " << col[working] << endl ;
        for(int i = 0 ; i < v[working].size() ; i++){
            if(visited[v[working][i]] != 1){
                q.push(v[working][i]);
            }
            if(col[working] == 1 && col[v[working][i]] != 2){
                col[v[working][i]] = 2;
                l++;
      //          cout << "        ---GOING TO " << v[working][i] << " CHANGED COLOUR " << col[v[working][i]] << "\n";
            }
            else if(col[working] == 2 && col[v[working][i]] != 1){
                col[v[working][i]] = 1;
                va++;
       //         cout << "        ---GOING TO " << v[working][i] << " CHANGED COLOUR " << col[v[working][i]] << "\n";
            }
            else{
        //        cout << "        ---GOING TO " << v[working][i] << " NOT CHANGED COLOUR " << col[v[working][i]] << "\n";
            }


        }
    }
return max(va,l);
}
