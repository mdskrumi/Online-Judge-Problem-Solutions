#include <bits/stdc++.h>
using namespace std;
int main(){

        int n , g;
        vector <int> v;
        vector<int> :: iterator it;
        cin >> n ;
        for(int i = 0 ; i < n; i++){
            cin >> g;
            v.push_back(g);
        }
        if(n<=2){
            cout << 0 <<endl;
            return 0;
        }
        sort(v.begin(),v.end());
        int a = v.front();
        int z = v.back();

        int i = 0 , j = v.size()-1;

        for(i ; i < v.size() ; i++){
            if(v[i]!=a){
                break;
            }
        }
        int temp = i;
        for(j ; j >= temp ; j--){
            if(v[j]!=z){
                break;
            }
            i++;
        }
        cout << (v.size() - i) <<endl;
return 0;
}


