#include<bits/stdc++.h>,
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
/*-----------------------------------FUNCTIONS-----------------------------------------*/

/*-----------------------------------Variables-----------------------------------------*/
vector<pair < int , pair <int , int>  > >s;
int ans[1002];
int main(){
    int t ;
    sf("%d",&t);
    while(t--){
        int n;
        sf("%d",&n);
        for(int i = 0 ; i < n ; i++){
            ans[i] = 0;
        }
        for(int i = 0 ; i < n ; i++){
            int x , y;
            sf("%d%d",&x,&y);
            s.pb(mp( i , mp(x,y)));

        }
        for(int i = 1 ; s.size()!=0 ; i++){
            for(int j = 0 ; j < s.size() ; j++){
            //    cout << "comes : " << s[j].second.first << " gooes : " << s[j].second.second << " , NOw time" << i <<endl;
                if(s[j].second.first<=i && s[j].second.second >= i){
               //     cout << "SETTING : " << s[j].first << " = " << i <<endl;
                    ans[s[j].first]= i;
                    s.erase(s.begin()+j);
                    break;
                }
                else if( s[j].second.second < i){
               //     cout << "ERASING " << s[j].first << " NOT SETTED\n";
                    s.erase(s.begin()+j);
                    j--;
                }
            }
        }
        for(int i = 0 ; i < n ; i++){
            cout << ans[i] << " ";
        }cout << endl;
    }
return 0;
}
