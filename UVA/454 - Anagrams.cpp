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
#define     DOUR   ios_base::sync_with_stdio(0)


using namespace std;


string getString(string a){
    a.erase(remove(a.begin(),a.end(),' '),a.end());
    sort(a.begin(),a.end());
    return a;
}
int main(){
    DOUR;
    //TAKING;MAKING;
    int t;
    cin >> t;
    cin.ignore();
    cin.ignore();

    vector<string>v;

    while(t--){
        string s ;
        while(getline(cin,s) && s != ""){
            v.pb(s);
        }
        sort(v.begin(),v.end());

        for(int i = 0 ; i < v.size() ; i++){
            for(int j = i+1 ; j < v.size() ; j++){
                if(getString(v[i]) == getString(v[j])){
                    cout << v[i] << " = " << v[j] <<endl;
                }
            }
        }
        if(t>0)cout << nl;
        v.clear();

    }

return 0;
}
