#include <bits/stdc++.h>
using namespace std;

#define BOLT ios_base::sync_with_stdio(0)
#define newline cout << "\n"
#define eline cerr << "\n"
#define IN_FILE freopen("input.txt", "r", stdin);
#define OUT_FILE freopen("output.txt", "w", stdout);


void USEFILE(){
    IN_FILE;
   	OUT_FILE
}

void solve(){

	int n, m , sum = 0, r = 0 , c = 0;
	cin >> n >> m;
	int arr[n][m];
	for(int i = 0 ; i < n; i++){
		sum = 0;
		for(int j = 0 ; j < m ; j++){
			cin >> arr[i][j]; 
			sum += arr[i][j];
		}
		if(sum == 0)r++;
	}

	for(int i = 0 ; i < m; i++){
		sum = 0;
		for(int j = 0 ; j < n ; j++){
			sum += arr[j][i];
		}
		if(sum == 0)c++;
	}

	if(min(r,c) % 2){
		cout << "Ashish";
	}else cout << "Vivek";
	newline;
	
}

int main()
{
    BOLT;
    //USEFILE();
    int t;
    cin >> t;
    while(t--)
    	solve();
    return 0;
}

