#include <bits/stdc++.h>
using namespace std;

#define BOLT ios_base::sync_with_stdio(0)
#define newline cout << "\n"
#define eline cerr << "\n"
#define LL_MAX 9223372036854775807
#define LL_MIN -9223372036854775808
#define IN_FILE freopen("input.txt", "r", stdin)
#define OUT_FILE freopen("output.txt", "w", stdout)

// g++ -o contest contest.cpp


void USEFILE(){
    IN_FILE;
    OUT_FILE;
}

bool comp(string one , string two){
    for(int i = 0 ; i < one.size() ; i++){
        if(one[i] != two[i] && two[i] != '?'){
            return false;
        }
    }
    return true;
}

int manyTimes(string s , string t){
    int found = 0;
    for(int i = 0 ; i < s.size(); i++){
        string make = "";
        for(int j = i ; j < s.size() && j < i+7; j++){
            make+=s[j];
        }
        if(make == t){
            found++;
        }
    }
    return found;
}

void solve(int kase){
    int n;
    cin >> n;
    string s , t = "abacaba" , res = "";
    cin >> s;
    
    int found = manyTimes(s,t);

    if(found==1){
        cout << "Yes"; newline;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i]=='?'){
                s[i] = 'z';
            }
            cout << s[i];
        }
        newline;
    }else if( found > 1){
        cout << "No"; newline;
    }
    else{
        bool flag = true;
        for(int i = 0 ; i < s.size() && flag; i++){
            string make = "";
            for(int j = i ; j < s.size() && j < i+7; j++){
                make+=s[j];
            }
            if(comp(t,make)){
                for(int k = 0 ; k < i ; k++){
                    res+=s[k];
                }
                res+=t;
                for(int k = i+7 ; k < s.size() ; k++){
                    res+=s[k];
                }
            }
            found = manyTimes(res,t);
            if(found == 1){
                flag = false;
                cout << "Yes\n";
                for(int i = 0 ; i < res.size() ; i++){
                    if(res[i]=='?'){
                        res[i] = 'z';
                    }
                    cout << res[i];
                }
                newline;
            }else{
                res = "";
            }
        }
        if(flag){
            cout << "No"; newline;
        }
    }
  
}


int main(){
    BOLT;
    // USEFILE();
    int t, kase = 0;
    cin >> t;
    while(t--)
         solve(++kase);
    // solve(0);

return 0;
}
