#include<bits/stdc++.h>,
#include<ctype.h>
#include<string.h>

#define TAKING      freopen("input.txt" , "r" , stdin);
#define MAKING      freopen("output.txt","w" , stdout);

#define     sf      scanf
#define     pf      printf
#define     pb      push_back
#define     mp      make_pair
#define     DOS     10000000000
#define     nl      "\n"

using namespace std;


int main(){
    int number , budget , hotel , week;
    while(sf("%d%d%d%d",&number ,&budget , &hotel , &week)!=EOF){
    vector< pair <int , vector<int> > > v;
    int cost ;
    vector<int>beds;
    for(int i = 0 ; i < hotel ; i++){
        sf("%d",&cost);
        for(int j = 0 ; j < week ; j++){
            int a ;
            cin >> a;
            beds.push_back(a);
        }
        v.pb({cost,beds});
        beds.clear();
    }
    int cancost = DOS;
    for(int i = 0 ; i < week ; i++){
        for(int j = 0 ; j < hotel ; j++){
            if(v[j].second[i] >= number){
                if(cancost > v[j].first*number){
                    cancost = v[j].first*number;
                }
            }
        }
    }
    if(cancost!= DOS && cancost <= budget){
        pf("%d\n",cancost);
    }else
        puts("stay home");

        v.clear();
    }

return 0;
}
















