#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string , int>players;
    map<string , int>::iterator it;
    string name , finalname; int point , finalpoint = 0;
    int t;
    cin >> t;
    while(t-->0){
        cin >> name >> point ;

        it = players.find(name);
        if(it!=players.end()){
            players[name] = players[name] + point;
        }
        else{
            players.insert({name,point});
        }

        for(it = players.begin(); it!=players.end();it++){
        if(it->second > finalpoint){
            finalpoint = players[finalname];
            finalname = it->first;
        }
    }
    }
    cout << finalname <<endl;
return 0;
}
