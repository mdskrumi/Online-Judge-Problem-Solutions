#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ;
    cin >> n;
    char num[n];
    for(int i = 0 ; i < n ; i++){
        cin >> num[i];
    }
    if(n%2 == 1 && n > 3){
        for(int i = 0 ; i < n ; i++){
            if(i==3){
                cout << '-';
            }
            else if(i%2 == 1 && i > 3){
                cout << '-';
            }
            cout << num[i];
            }
        }
    else if(n%2 == 0 && n > 3){
        for(int i = 0 ; i < n ; i++){
            if(i%2==0 && i !=0){
                cout << '-';
            }
            cout << num[i];
        }
    }
    else{
        for(int i = 0 ; i < n ; i++){
            cout << num[i];
        }
    }
    cout << "\n";
return 0;
}
