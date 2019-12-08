#include<bits/stdc++.h>
using namespace std;
int main(){

   long n , coun = 0 , test = 0;
   long sequ[100000];
   int q = 0;
   while(cin >> n){
        sequ[q] = n;
        q++;
    }

   long number[q];
    for(int i = 0 ; i < q ; i++){
            test = 0;
            number[i] = sequ[i];
    for(int f = i-1; f >= 0,f !=-1 ; f-- ){
            if(number[f] == number[i]){
                test = 1;
                break;
            }
    }
            if(test == 1){
                continue;
            }

        for(int j = i ; j < q ; j++){
            if(sequ[i]==sequ[j]){
                coun++;
            }
        }   cout<< sequ[i] << " " << coun << endl;
            coun = 0;
        }


return 0;
}



