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
	int n, w;
	cin >> n >> w;
	vector<long long> v;

	for(int i = 0 ; i < n ; i++){
		long long x, y;
		cin >> x >> y;
		if(find(v.begin(), v.end(),y)==v.end()){
			v.push_back(y);
		}
	}

	sort(v.begin(), v.end());

	int ans = 0, i = 1, flag = 0;
	int init = v[0];
	while(i < v.size()){
		if(v[i]-init <= w){
			i++;
			flag = 1;
			continue;
		}
		flag = 0;
		init = v[i];
		ans++;
	}

	if(flag) ans++;

	cout << "Case " << kase << ": ";
	cout << ans; newline;


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
