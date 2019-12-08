#include<bits/stdc++.h>
using namespace std;
int main(){
    int num[40];
    for(int i = 1 ; i <= 35 ; i++){
        num[i-1] = (i*(i+1))/2;
    }
    int s ;
    cin >> s;
    int low = 0 , high = 39;
    while(low<=high){
        int mid = (low+high)/2;
        if(num[mid]==s){
            cout << "YES\n";
            return 0;
        }
        else if(num[mid]<s){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    cout << "NO\n";
return 0;
}
