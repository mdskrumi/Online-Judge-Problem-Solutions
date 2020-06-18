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

void solve(int kase){
	int n, x;
	cin >> n >> x;

	int deg[n+1];
	memset(deg, 0, sizeof deg);

	for(int i = 1 ; i < n ;i++){
		int u, v;
		cin >> u >> v;
		deg[u]++;
		deg[v]++;
	}

	if(deg[x]<=1 || n % 2 == 0){
		cout << "Ayush";
	}
	else {
		cout << "Ashish";
	}
	newline;

}

int main()
{
    BOLT;
    //USEFILE();
    int t, kase = 0;
    cin >> t;
    while(t--)
    	solve(++kase);
    return 0;
}
