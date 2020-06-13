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
		long long n , m;
		cin >> n >> m;
		cout << min(n,min(m,(n+m)/3));newline;
	}

}

int main()
{
    BOLT;
    //USEFILE();
    solve();
    return 0;
}
