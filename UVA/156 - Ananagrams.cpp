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
#define     FLASH   ios_base::sync_with_stdio(0)


using namespace std;

char easytolower(char in) {
  if(in <= 'Z' && in >= 'A')
    return in - ('Z' - 'z');
  return in;
}

int main(){
    FLASH;
   // TAKING ; MAKING;
    string s;
    map<string ,pair< string , int> > m;
    map<string, pair< string , int> > ::iterator it;

    while(cin >> s && s != "#"){
        string temp = s;

        for(int i = 0 ; i < temp.size() ;i++){
            temp[i] = easytolower(temp[i]);
        }

        sort(temp.begin(),temp.end());

        it = m.find(temp);

        if(it!=m.end()){
            m[temp].second++;
        }else{
            m.insert( {temp , mp(s ,  1) } );
        }

    }
    vector<string>v;
    for( it = m.begin(); it!= m.end() ; it++){
        if(it->second.second == 1){
            v.pb(it->second.first);
        }
    }
    sort(v.begin(),v.end());
    for(string a : v){
        cout << a << nl;
    }

return 0;
}
