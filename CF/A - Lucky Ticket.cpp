#include<bits/stdc++.h>
using namespace std;
int main(){

    int n , t = 0;
    char s[100];
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> s[i];
        if(s[i]!='4' && s[i]!='7'){
            t = 1;
        }
    }
    if(t==1){
        cout <<"NO" <<endl;
        return 0;
    }
    int sum1=0,sum2=0;

    for(int i = 0 ; i < n ; i++){
        if(i<(n/2)){
            sum1+=(s[i]-'0');
        }
        else{
            sum2+=(s[i]-'0');
        }
    }
    if(sum1==sum2)cout <<"YES" <<endl;
    else cout <<"NO" <<endl;
return 0;
}

