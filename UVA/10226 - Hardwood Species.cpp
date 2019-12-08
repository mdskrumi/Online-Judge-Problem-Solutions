#include<bits/stdc++.h>
using namespace std;
int main(){

        map<string , float> tree;
        map<string , float> :: iterator itmap;
        string dummy;
        int t , i;
        cin>> t;
        getline(cin, dummy);
        getline(cin, dummy);
        while(t-->0){
                string name;
                i = 0;
        while(getline(cin,name)){
                if(name==""){
                    break;
                }
            i++;
            itmap = tree.find(name);
            if(itmap == tree.end()){
                tree.insert({name,1});
            }
            else{
                    tree[name]++;
            }
        }
        for(itmap=tree.begin();itmap!=tree.end();itmap++){
           cout << itmap->first << " " << setprecision(4) << fixed  << ((itmap->second*100)/i) << endl;
        }
        if(t>=1){
        cout <<endl;
        }
        tree.clear();
        }
return 0;
}
