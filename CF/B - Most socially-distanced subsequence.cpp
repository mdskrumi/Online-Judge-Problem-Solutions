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
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		vector<int> v;
		long long sum = 1;

		char currentOrder;

		if(arr[0] < arr[1]){
			currentOrder = 'A';
		}
		else{
			currentOrder = 'D';
		}

		v.push_back(arr[0]);

		int last = arr[0];

		for(int i = 1; i <= n-2; i++){
			if(arr[i] < arr[i+1] && currentOrder != 'A'){
				sum += 1;
				last = arr[i];
				v.push_back(arr[i]);
				currentOrder = 'A';
			}
			else if(arr[i] > arr[i+1] && currentOrder != 'D'){
				sum += 1;
				last = arr[i];
				v.push_back(arr[i]);
				currentOrder = 'D';
			}
		}

		v.push_back(arr[n-1]);
		sum+= 1;
		cout <<sum;newline;
		for(int i = 0 ; i < v.size() ; i++){
			if(i==v.size()-1)
				cout << v[i];
			else cout << v[i] << " ";
		}
		newline;
		v.clear();
	}
}

int main()
{
    BOLT;
    //USEFILE();
    solve();
    return 0;
}
