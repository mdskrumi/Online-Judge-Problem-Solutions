#include<bits/stdc++.h>
using namespace std;
int main(){
  /* freopen("A-small-attempt3.in", "r", stdin);
    freopen("output.in", "w", stdout);*/

   vector< pair<int , int> > v;
   pair<int , int>p;
   int t;
   cin >> t ;
   int a , b;
   while(t--){
    cin >> a >> b;
    p = make_pair(a,(a+b));
    v.push_back(p);
   }

   for(int i = 0 ; i < v.size() ; i++){
        for(int j = 0 ; j < v.size(); j++){
            if(v[i].first == v[j].second){
                if(v[i].second == v[j].first){
                    cout << "YES\n";
                    return 0;
                }
            }
        }
   }
    cout << "NO\n";
return 0;
}
