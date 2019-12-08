#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;
int main(){

        string word , ans;
        int len1 , len2 ;
            len1 = len2 = 0;
        while(cin >> word){
            if(word == "E-N-D"){
                break;
            }
            for(int i = 0 ; i < word.length() ;i++){
                    if(word[i]=='-' || isalpha(word[i])){
                     len2++;
                    }

            }
            if(len1 < len2){
                len1 = len2;
                ans = word;
            }
            len2 = 0;
        }
        for(int i = 0 ; i < ans.length() ; i++){
            if(ans[i]>= 65 && ans[i] <= 90){
                ans[i] = (ans[i]-'A') + 'a';
            }
            if(isalpha(ans[i]) || ans[i]=='-'){
            cout << ans[i];
            }
        }
        cout <<endl;

return 0;
}
