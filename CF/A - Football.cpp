#include<bits/stdc++.h>
using namespace std;
int main(){

        map<string,int>m;
        map<string,int>::iterator it;
        string name;

        int n;
        cin >> n;
        while(n--){
            cin >> name;
            it = m.find(name);
            if(it == m.end()){
                m.insert({name,1});
            }
            else{
                m[name]++;
            }
        }
        int ans = 0;
        for(it = m.begin();it!=m.end();it++){
            if(it->second > ans){
                ans = it->second;
                name = it->first;
            }
        }
        cout << name <<endl;

return 0;
}
