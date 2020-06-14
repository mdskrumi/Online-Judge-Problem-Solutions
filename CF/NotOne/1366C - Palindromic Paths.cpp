#include <bits/stdc++.h>
using namespace std;

#define BOLT ios_base::sync_with_stdio(0)
#define newline cout << "\n"
#define eline cerr << "\n"
#define IN_FILE freopen("input.txt", "r", stdin);
#define OUT_FILE freopen("output.txt", "w", stdout);

// g++ -o contest contest.cpp

void USEFILE(){
    IN_FILE;
   	OUT_FILE
}

int tdx[] = {1, 0} , ddx[] ={-1, 0};
int tdy[] = {0, 1} , ddy[] ={0, -1};

vector<int> cost1[100], cost2[100];


bool bound(int i , int j ,int n , int m){
	if(i<0 || i>=n || j < 0 || j >= m)
		return false;
	return true;
}


void solve(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;

		int arr[n][m];

		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++){
				cin >> arr[i][j];
			}
		}
		int vis1[n][m];
		int vis2[n][m];

		memset(vis1, 0, sizeof vis1);
		memset(vis2, 0, sizeof vis2);


		// newline;newline;
		// for(int i = 0; i < n ;i++){
		// 	for(int j = 0; j < m ; j++){
		// 		cout << vis1[i][j] << " ";
		// 	}
		// 	newline;
		// }


		queue< pair<int,int> >q;
		q.push(make_pair(0,0));
		vis1[0][0] = 1;

		int maxCost = 0;
		while(!q.empty()){
			int x = q.front().first;
			int y = q.front().second;
			//cout << "ENTERING: " << x << " " << y << " "; newline;
			cost1[vis1[x] [y]].push_back(arr[x][y]);

			//cout << "FOR COST: " <<  vis1[x][y] << " " << cost1[vis1[x][y]].size();newline;

			maxCost = max(maxCost, vis1[x][y]);
			q.pop();
			for(int i = 0 ; i < 2; i++){
				if(vis1[x + tdx[i]][y+tdy[i]] == 0 && bound(x + tdx[i], y+tdy[i], n , m)){
					q.push(make_pair(x + tdx[i], y+tdy[i]));
					vis1[x + tdx[i]][y+tdy[i]] = vis1[x][y] + 1;
				}
			}
		}
		// newline;newline;
		// for(int i = 0; i < n ;i++){
		// 	for(int j = 0; j < m ; j++){
		// 		cout << vis1[i][j] << " ";
		// 	}
		// 	newline;
		// }

		q.push(make_pair(n-1,m-1));
		vis2[n-1][m-1] = 1;

		maxCost = 0;
		while(!q.empty()){
			int x = q.front().first;
			int y = q.front().second;
			//cout << "ENTERING: " << x << " " << y << " "; newline;
			cost2[vis2[x] [y]].push_back(arr[x][y]);

			//cout << "FOR COST: " <<  vis1[x][y] << " " << cost1[vis1[x][y]].size();newline;

			maxCost = max(maxCost, vis2[x][y]);
			q.pop();
			for(int i = 0 ; i < 2; i++){
				if(vis2[x + ddx[i]][y+ddy[i]] == 0 && bound(x + ddx[i], y+ddy[i], n , m)){
					q.push(make_pair(x + ddx[i], y+ddy[i]));
					vis2[x + ddx[i]][y+ddy[i]] = vis2[x][y] + 1;
				}
			}
		}


		// newline;newline;
		// for(int i = 0; i < n ;i++){
		// 	for(int j = 0; j < m ; j++){
		// 		cout << vis1[i][j] << " ";
		// 	}
		// 	newline;
		// }
		// newline;;
		// for(int i = 0; i < n ;i++){
		// 	for(int j = 0; j < m ; j++){
		// 		cout << vis2[i][j] << " ";
		// 	}
		// 	newline;
		// }
		// newline;newline;
		int ans = 0;

		for(int i = 1; i <= maxCost; i++){
			if(i>maxCost/2){
				cost1[i].clear();
				cost2[i].clear();
				continue;
			}
			int one = 0, zero = 0;
			for(int j = 0; j < cost1[i].size() ; j++){
				if(cost1[i][j] == 1){
					one++;
				}else zero++;

				if(cost2[i][j] == 1){
					one++;
				}else zero++;
			}

			if(one>zero){
				ans += zero;
			}else{
				ans += one;
			} 
			cost1[i].clear();
			cost2[i].clear();
		}	

		cout << ans;newline;
	}

}

int main()
{
    BOLT;
    //USEFILE();
    solve();
    return 0;
}
