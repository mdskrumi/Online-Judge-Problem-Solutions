#include<bits/stdc++.h>
using namespace std;
int main(){

    int n , m;
    cin >> n >> m;
    vector<string>v;
    string asd;
    for(int i = 0 ; i < n ; i++){
        cin >> asd;
        v.push_back(asd);
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 1 ; j < m ; j++){
            if(v[i][j]!=v[i][j-1]){
                cout << "NO" <<endl;
                return 0;
            }
        }
    }
    for(int i = 1 ; i < n ; i++){
        if(v[i][0]==v[i-1][0]){
            cout << "NO" <<endl;
            return 0;
        }
    }
    cout << "YES" <<endl;
return 0;
}
