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
	int take = even;

	if(take > k){
		if(odd>0){
			cout << "Yes";
		}
		else{
			cout << "No";
		}
	}
	else{
		int required = abs(k-take);
		if(required % 2 == 1){
			if(required <= odd){
				cout << "Yes";
			}else{
				cout << "No";
			}
		}else{
			if(required != k){
				required+=1;
				if(required <= odd){
					cout << "Yes";
				}else{
					cout << "No";
				}
			}else{
				if(required % 2 == 1){
					cout << "Yes";
				}else cout << "No";
			}
		}
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
