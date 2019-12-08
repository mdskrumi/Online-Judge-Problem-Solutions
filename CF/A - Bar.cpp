#include<bits/stdc++.h>
using namespace std;
int main(){
  /* freopen("A-small-attempt3.in", "r", stdin);
    freopen("output.in", "w", stdout);*/

    int t;
    vector<string>sen;
    vector<string>num;
    string s;
    cin >> t;
    while(t-->0){
        int k = 0;
        cin >> s;
        for(int i = 0 ; i < s.size() ; i++){
            if(isdigit(s[i])){
                num.push_back(s);
                k = 1;
                break;
            }
        }
        if(k == 0){
            sen.push_back(s);
        }
    }
    int ans = 0;
    for(int i = 0 ; i < sen.size();i++){
        if(sen[i] == "ABSINTH" || sen[i] == "BEER" || sen[i] == "BRANDY" || sen[i] == "CHAMPAGNE" || sen[i] == "GIN" || sen[i] == "RUM" || sen[i] == "SAKE" || sen[i] == "TEQUILA" || sen[i] == "VODKA" || sen[i] == "WHISKEY" || sen[i] == "WINE" ){
            ans++;
        }
    }
    for(int i = 0 ; i < num.size();i++){
        int n ;
        stringstream ss(num[i]);
        ss >> n;
        if(n < 18){
            ans++;
        }
    }
    cout << ans << endl;
return 0;
}
