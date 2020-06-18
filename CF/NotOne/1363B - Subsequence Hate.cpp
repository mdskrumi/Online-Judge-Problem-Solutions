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
	string s;
	cin >> s;
	int ones = 0, zeros = 0;
	for(int i = 0 ; i < s.size() ; i++){
		if(s[i]=='1')ones++;
		else zeros++;
	}

	if(ones == 0 || zeros == 0){
		cout << 0;
	}
	else{
		int ans = 1000000 , newZero = 0, newOne = 0;
		for(int i = 0 ; i < s.size() ; i++){
			if(s[i] == '0'){
				newZero += 1; 
				ans = min( newOne + ( zeros - newZero) + 1, ans); // 000000 111111
				ans = min( ( newZero - 1 ) + (ones- newOne), ans); // 11111 000000
			}
			else if(s[i] == '1'){
				newOne += 1;
				ans = min( newZero + ( ones- newOne ) + 1, ans ); // 1111 00000
				ans = min( (newOne -1) + ( zeros - newZero ), ans ); // 0000 1111
			}

			//cout << "FOR: " << i << ", ANS: " << ans ; newline;  

		}	
		cout << ans;
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
