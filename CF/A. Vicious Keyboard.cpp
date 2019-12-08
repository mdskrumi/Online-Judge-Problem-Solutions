#include<bits/stdc++.h>
using namespace std;

int main(){

       string s;
       cin >> s;
        int ans = 0;
       for(int i = 1 ; i < s.size() ; i++){
            if(s[i-1]=='V' && s[i]=='K'){
                ans++;
                s[i-1]='x';
                s[i]='x';
            }
       }
       for(int i = 1 ; i < s.size() ; i++){
            if((s[i-1]=='V' && s[i]=='V') || (s[i-1]=='K' && s[i]=='K')){
                ans++;
                break;
            }
       }
       cout << ans <<endl;

return 0;
}
