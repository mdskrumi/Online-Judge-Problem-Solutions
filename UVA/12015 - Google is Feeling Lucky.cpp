#include<bits/stdc++.h>
using namespace std;
int main(){

    vector< pair<string,int> >google;
    pair<string,int>g;
    vector< pair<string,int> >::iterator it;
    int t , kase = 1;
    cin >> t;
    while(t-->0){
        int num , i = 0 , k = 10;
        string name;
        while(k--){
        cin >> name >> num;
        i = max(num,i);
        g = make_pair(name,num);
        google.push_back(g);
        }
        printf("Case #%d:\n",kase++);
        for(it = google.begin();it!=google.end();it++){
            if(it->second == i){
                cout << it->first <<endl;
            }
        }google.clear();
    }

return 0;
}
