#include<bits/stdc++.h>
using namespace std;

int main(){

    string a;
    while(cin >> a){
    int c = 0;
    for(int i = 0 , j = a.size()-1 ; i<=j ; i++,j--){
        if(a[i]!=a[j] || (i == j && c == 0)){
            c++;
        }
    }
    if(c==1 || (a.size()==1) ){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    }
return 0;
}
