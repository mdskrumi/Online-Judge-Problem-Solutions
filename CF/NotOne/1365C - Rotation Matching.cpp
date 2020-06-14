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
	int n;
	cin >> n;
	int arr1[n], arr2[n];

	int pos[n+1];

	for(int i = 0 ; i < n ; i++){
		cin >> arr1[i];
	}
	for(int i = 0 ; i < n ; i++){
		cin >> arr2[i];
		pos[arr2[i]] = i;
	}
	int ans = 0;
	map<int,int>rotations;
	for(int i = 0 ; i < n ; i++){
		int rot = pos[arr1[i]] - i;
		if(rot<0) rot+=n;
		// cout << "FOR: " << arr1[i] << " rotations required " << rot; newline;
		rotations[rot]++;
		ans = max(ans,rotations[rot]);
	}

	cout << ans;newline;

}

int main()
{
    BOLT;
    //USEFILE();
    // int t;
    // cin >> t;
    // while(t--)
    solve();
    return 0;
}
