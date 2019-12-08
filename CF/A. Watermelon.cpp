#include<bits/stdc++.h>
using namespace std;
int even(int a);
int main(){

            int k;
            while(cin >> k){
            if(even(k)==1){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
            }
return 0;
}
int even(int a){
         for(int i = 2 ; i <= a ; i+=2){
            for(int j = 2 ;j <= a; j+=2){
                if((i+j)==a){
                        return 1;
                }
            }
         }
         return 0;
}

