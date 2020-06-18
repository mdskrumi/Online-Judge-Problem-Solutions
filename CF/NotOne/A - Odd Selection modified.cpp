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
	int n, k, odd = 0, even = 0;
	cin >> n >> k;
	int x;
	for(int i = 0 ; i < n ; i++){
		cin >> x;
		if(x%2){
			odd++;
		}else even++;
	}
	int take = min(odd,k);
	if(take % 2 == 0){
		if(take > 0 && (take+even -1) >= k){
			cout << "Yes";
		}else cout  << "No";
	}else{
		cout << "Yes";
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
