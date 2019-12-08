#include <bits/stdc++.h>
using namespace std;

void lowword(string x);

set<string>s;
set<string>::iterator it;

int main(){
        string word;
        while(cin >> word){
            lowword(word);
        }
        for(it = s.begin() ; it!=s.end();it++ ){
            cout << *it <<endl;
        }
return 0;
}
void lowword(string x){
        string y="";
    for(int i = 0 ; i < x.size() ; i++ ){
        if(isalpha(x[i])){
            x[i] = tolower(x[i]);
            y+=x[i];
        }
        else if(y!=""){
          s.insert(y);
          y="";
        }
    }
    if(y!=""){s.insert(y);}
}
