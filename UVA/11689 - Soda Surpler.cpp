#include<bits/stdc++.h>
using namespace std;
int main(){

    int t ,e , f , c , had , eat;

        cin >> t ;
        while(t--){
            cin >> e >> f >> c;
            had = e+f;
            eat = 0;
            while(had>=c){
                eat += had/c;
                had = (had/c)+(had%c);
            }
            cout << eat << endl;
        }


return 0;
}
