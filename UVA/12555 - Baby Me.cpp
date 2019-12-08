#include<bits/stdc++.h>
using namespace std;
int main(){
          double fst,snd  ;
          int kase = 1, t;
          string rest;
          cin >> t;
          while(t--){
            cin >> fst;
            fst*=.5;
            getline(cin,rest);

            if(rest.size()<=3){
                cout << "Case "<< kase <<": "<< fst << endl;
            }
            else{
               snd =  (rest[3] - '0')*.05;
               cout <<"Case "<< kase <<": "<< (fst+snd) << endl;
            }
            kase++;

          }


return 0;
}
