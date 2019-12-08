#include<bits/stdc++.h>
using namespace std;

int main(){

        int channel[100];
        for(int i = 0 ; i < 100 ; i++){
            channel[i]=i;
        }
        int m , n ;
        while(cin >> m >> n && (m!=-1 && n!=-1)){
            int ans1=0,ans2=0;

            for(int i = m ; channel[i]!= n ; i++){
                if(i == 99){
                    i=-1;
                }
                    ans1++;
            }
            for(int i = m ; channel[i]!= n ; i--){
                if(i==0){
                    i = 100;
                }
                    ans2++;
            }
            cout << min(ans1,ans2) <<endl;

        }


return 0;
}
