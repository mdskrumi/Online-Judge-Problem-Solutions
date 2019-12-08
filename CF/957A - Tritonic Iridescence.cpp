#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define DOS 100000000000
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
/*-----------------------------------FUNCTIONS-----------------------------------------*/

/*-----------------------------------Variables-----------------------------------------*/

int main(){
        //Taking;Making;
        int n;
      //  while(1){
        sf("%d",&n);
        string s;
        cin >> s;
        int done = 0;
        if(s[0]=='?' || s[s.size()-1]=='?'){
            done = 1;
        }
        for(int i = 1 ; i < s.size() ; i++){
            if(s[i-1]=='?' && s[i]=='?'){
                done = 1;
            }
            if(s[i]=='?' && s[i-1]==s[i+1]){
                done=1;
            }
            if(s[i-1]==s[i] && s[i]!='?'){
                done = 0;
                break;
            }
        }
        if(done==1){
            cout << "Yes\n";
        }else cout << "No\n";
     //   }
return 0;
}

