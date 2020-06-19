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

int getAns(int n, int k){
    if(n<=0)return 0;
    return (n + k) / (k + 1);
}

void solve(int kase){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    bool f = true;
    int zeros = 0;
    int ans = 0;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == '0'){
            zeros++;
            continue;
        }
        if(s[i] == '1' && f ){
            ans += getAns(zeros-k,k);
            zeros = 0;
            f = false;
        }
        else{
            ans += getAns(zeros-(2*k),k);
            zeros = 0;
        }
    }
    if(!f)
        ans += getAns(zeros-k,k);
    else{
        ans += getAns(zeros,k);
    }
    cout << ans;
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
