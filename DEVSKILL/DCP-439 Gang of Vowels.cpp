#include <bits/stdc++.h>
using namespace std;

int main() {
	int t , kase = 1;
	cin >> t;
	while(t--){
        int fak;
        cin >> fak;
        cin.ignore();
		string a ;
		cin >> a;
		int p = 0, ans = 0;
		for(int i = 0 ; i < a.size();i++){
			if(a[i]=='a' || a[i]=='e' ||a[i]=='i' ||a[i]=='o' ||a[i]=='u'){
				if(p==1){
					continue;
				}else{
					ans++; p = 1;
				}
			}
			else{
				p = 0;
			}
		}
		cout<<"Case "<<kase++<<": "<<ans<<endl;

	}
	return 0;
}
