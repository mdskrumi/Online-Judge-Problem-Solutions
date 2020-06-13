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
	vector<int>v(n);
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
		if(i>0)
			v[i]+=v[i-1];
	}
	int q;
	cin >> q;
	while(q--){
		int x;
		cin >> x;
		int low = 0;
		int high = n-1;
		int mid;
		while(low <= high){
			mid = low + (high-low)/2;
			if(v[mid] == x){
				cout << mid + 1;
				x = -1;
				break;
			}
			else if(v[mid] < x ){
				low = mid + 1;
			}
			else {
				high = mid - 1;
			}

			/*cout << low << " " << high << " " << mid;newline;
			cout << v[low] << " " << v[high] << " " << v[mid];newline;newline;*/
		}

		if(x!=-1){
			//cout << "MID:  " << mid << " " << v[mid];newline;
			if(v[mid] < x){
				cout << mid+2;
			}else{
				cout << mid+1;
			}
		}
		newline;


	}

}

int main()
{
    BOLT;
    //USEFILE();
    solve();
    return 0;
}
