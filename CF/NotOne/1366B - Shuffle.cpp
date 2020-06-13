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
	int t;
	cin >> t;
	while(t--){
		int n, x, m, ans = 0;
		cin >> n >> x >> m;
		int low = x, high = x;

		for(int i = 0 ; i < m; i++){
			int l, r;
			cin >> l >> r;

			if( ( l <= low && r >= low ) || ( l <= high && r >= high) ){
				low = min(l,low);
				high = max(high,r);
			}
			cerr << (high-low)+1;eline;
		}
		cout << (high-low)+1 ; newline;
	}

}

int main()
{
    BOLT;
    //USEFILE();
    solve();
    return 0;
}
