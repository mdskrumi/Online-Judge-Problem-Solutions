#include<bits/stdc++.h>
using namespace std;
int main(){

   long long s ;
   cin >> s;
   long long arr[s],arr2[s],ele = 0;
   vector<long long>v;
   for(int i = 0 ; i < s ; i++){
        cin >>arr[i];
        if(arr[i] == 0){
            ele = 0;
            arr2[i] = 0;
            v.push_back(i);
        }
        else{
            ele++;
            arr2[i] = ele;
        }

   }ele = 0;
   for(int i = v[0] ; i >=0 ; i--){
        arr2[i]=ele++;
   }

   for(int i = 1 ; i < v.size();i++){
        ele = 0;
        for(int j = v[i] ; j >= 0 ; j--){
            if(arr2[j] >= ele){
                arr2[j] = ele++;
            }
            else{
                break;
            }
        }
   }

   for(int i = 0 ; i < s ; i++){
    cout << arr2[i] << " ";
   }

return 0;
}
