#include<bits/stdc++.h>
#include<string.h>
#define long2  long long
using namespace std;
int main(){

        long2 n;
        while(cin >> n){
                vector<long2> arr;
                long2 x;
                for(long2 i = 0 ; i < n ;i++){
                    cin >> x;
                    arr.push_back(x);
                }
                long2 i = 0 , j = n-1;
                if(n%2==1){
                for(i , j ; i<j ; i++ , j--){
                    if(i%2==0)swap(arr[i],arr[j]);
                    }
                }
                else{
                for(i , j ; i < j + 1 ; i++ , j--){
                    if(i%2==0)swap(arr[i],arr[j]);
                    }
                }
                for(long2 k = 0 ; k < n;k++){
                    cout << arr[k] << " " ;
                }cout <<endl;
                arr.clear();

        }
return 0;
}
