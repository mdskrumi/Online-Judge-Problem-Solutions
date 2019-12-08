#include<bits/stdc++.h>
using namespace std;
int main(){

    int n , a;
    vector<int>v;
    cin >> n;
    for(int i = 0 ; i < 12 ; i++){
        cin >> a;
        v.push_back(a);
    }
    if(n==0){
        cout << 0 <<endl;
        return 0;
    }
    sort(v.begin(),v.end());
    a = 0;
    for(int i = 11 ; i >=0 ; i--){
        a+=v[i];
        if(a>=n){
            cout << 12 - i <<endl;
            return 0;
        }
    }
    cout << -1 <<endl;
return 0;
}

