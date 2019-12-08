#include<bits/stdc++.h>
using namespace std;

int main(){

    int n , s;
    vector<int>v;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> s;
        v.push_back(s);
    }

    sort(v.begin(),v.end());

    for(int i = 1 ; i <= v.size()+1; i++){
        if(v[i-1]!=i){
            cout << i << endl;
            break;
        }
    }
return 0;
}
