#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<string>sens;
    string sen;
    int l = 0;
    while(getline(cin,sen)){
        sens.push_back(sen);
        if(sen.size()>l){
            l=sen.size();
        }
    }
    for(int i = 0 ; i < l ; i++){
        for(int j = sens.size() - 1 ; j >= 0 ; j--){
                if(i>=sens[j].size()){
                    cout << " ";
                    continue;
                }
            cout << sens[j][i];
        }
        cout << endl;
    }
return 0;
}
