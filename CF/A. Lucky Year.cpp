#include<bits/stdc++.h>
using namespace std;
long long i(string s);
int main(){
//    freopen("hello.txt","r",stdin);
//    freopen("ans.txt","w",stdout);

    string year,year2;
    while(cin >> year){
            year2 = "";
        for(int i = 0 ; i < year.size();i++){
            if(i==0){
                 if(year[i]=='9')
                    year2+= "10";
                    else
                     year2 = year[i]+1;
            }
            else{
                year2+='0';
            }
        }
        cout << i(year2)-i(year) <<endl;

    }

return 0;
}
long long i(string s){
		stringstream ss(s);
		long long x =0;
        ss >> x;
		return x;
}
