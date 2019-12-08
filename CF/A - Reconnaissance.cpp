#include<bits/stdc++.h>
using namespace std;
int main(){
  /* freopen("A-small-attempt3.in", "r", stdin);
    freopen("output.in", "w", stdout);*/

   vector<int>v;
   int a , d;
   cin >> a >> d;
   while(a--){
    int t;
    cin >> t;
    v.push_back(t);
   }
   sort(v.begin(),v.end());
   int ans = 0;
   for(int i = 0 ; i < v.size() ; i++){
        for(int j = i+1 ; j < v.size(); j++){
            if(abs(v[i]-v[j]) <= d){
                ans+=2;
            }else{
                break;
            }
        }
   }
   cout << ans << endl;
return 0;
}
