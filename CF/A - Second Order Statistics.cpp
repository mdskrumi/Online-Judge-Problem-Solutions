#include<bits/stdc++.h>
using namespace std;

int main(){
        int n , d;
        cin >> n;
        vector<int>v;
        for(int i = 0 ; i < n ; i++){
            cin >> d;
            v.push_back(d);
        }
        sort(v.begin(),v.end());

        for(int i = 0 ; i < v.size() ; i++){
            if(v[0]!=v[i]){
                cout << v[i] <<endl;
                return 0;
            }
            if(i==(v.size()-1)){
                cout << "NO" <<endl;
            }
        }

return 0;
}
