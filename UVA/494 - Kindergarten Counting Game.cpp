#include<bits/stdc++.h>
using namespace std;
int main(){

    string sen , sen2;
    int ans;
    while(getline(cin,sen)){
               ans = 0;
               int j = 0;
               for(int i = 0 ; i < sen.size() ; i++){
                    if(!isalpha(sen[i]) || i == sen.size()-1){
                         for(j ; j < i ; j++){
                            if( (sen[j]>='A'&&sen[j]<='Z')||(sen[j]>='a'&&sen[j]<='z') ){
                                ans++;
                                j = i;
                                break;
                            }

                         }
                    }
               }
               cout << ans <<endl;
    }
return 0;
}
