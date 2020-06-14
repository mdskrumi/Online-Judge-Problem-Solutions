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

	int arr[n];

	for(int i = 0; i < n ; i++){
		cin >> arr[i];
	}
	set<int> dif;
	int x;
	for(int i = 0; i < n ; i++){
		cin >> x;
		dif.insert(x);
	}

	if(dif.size()==1){
		for(int i = 1 ; i < n ; i++){
			if(arr[i-1]>arr[i]){
				x = -1;
				break;
			}
		}
		if(x != -1){
			cout << "Yes";
		}else
		cout <<"No";
	}else{
		cout << "Yes";
	}
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
