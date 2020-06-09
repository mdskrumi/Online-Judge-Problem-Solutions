#include <bits/stdc++.h>
using namespace std;

#define BOLT ios_base::sync_with_stdio(0)
#define newline cout << "\n"
#define IN_FILE freopen("input.txt", "r", stdin);
#define OUT_FILE freopen("output.txt", "w", stdout);

void USEFILE(){
    IN_FILE;
    OUT_FILE
}


set<string> getWords(int n){
    set<string>words;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        words.insert(s);
    }
    return words;
}

void solve(){
    int n , m;
    cin >> n >> m;

    set<string>words;
    int rem = 0;

    words = getWords(n);
    int flag = 1;
    for(int i = 0; i < m; i++){
        string s;
        cin >> s;
        if( words.find(s) != words.end() ){
            if(flag){
                flag = 0;
            }else{
                words.erase(s);
                flag = 1;
                rem++;
            }
        }else{
            rem++;
        }
    }

    /*cout << words.size() << " " << rem;
    newline;*/

    if(words.size() > rem){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    newline;
}

int main()
{
    BOLT;
    // USEFILE();
    solve();
    return 0;
}
