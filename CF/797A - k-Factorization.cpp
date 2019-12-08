#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
     //freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
        int n , k;
        while(cin >> n >> k){
        vector<int>v;
        for(int i = 2 ; n!=1 ; ){
            if(n%i == 0){
                v.push_back(i);
                n/=i;
            }
            else{
                i++;
            }
        }
      /*  cout << "SIZE : " << v.size() <<endl;
        for(int i = 0 ; i < v.size() ; i++){
            cout << v[i] << ' ';
        }
        cout << endl;*/
        int mul = 1;
        if(v.size() >= k) {
           for(int i = 0 ; i < v.size() ; i++){
                if(i < k-1){
                    cout << v[i] << " ";
                }
                else{
                    mul= mul * v[i];
                }
            }
            cout << mul;
        }
        else{
            cout << -1 ;
        }
        cout << "\n";
        }

return 0;
}
