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
		int n, x ;
		cin >> n >> x;
		int arr[n];
		long long sum1 = 0, sum2 = 0;
		for(int i = 0 ; i < n ; i++){
			cin >> arr[i];
			sum1+=arr[i];
		}
		sum2 = sum1;

		if(sum1 % x != 0){
			cout <<  n; newline;
		}
		else{
			for(int i = 0 , j = n-1 ; i < n, j>=0 ; i++, j--){
				if( (sum1-arr[i]) % x != 0){
					cout << n - i - 1; newline; 
					sum1 = -1;
					sum2 = -1;
					break;
				}else{
					sum1-=arr[i];
				}
				if((sum2-arr[j]) % x != 0){
					cout << j; newline;
					sum1 = -1;
					sum2 = -1;
					break;
				}else{
					sum2-=arr[j];
				}
			}

		if(sum2 != -1){
			cout << -1 ;newline;
		}
		}


	}

}

int main()
{
    BOLT;
    //USEFILE();
    solve();
    return 0;
}
