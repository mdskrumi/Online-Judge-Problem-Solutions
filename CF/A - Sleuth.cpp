#include<bits/stdc++.h>
using namespace std;
int main(){
    char a , in;
    while(cin >> in){
        if(isalpha(in)){
            a = in;
        }
    }
    if(a== 'A' || a=='E'|| a== 'a' || a=='e'|| a== 'o' || a=='O'|| a== 'I' || a=='i'|| a== 'u' || a=='U'|| a== 'y' || a=='Y' ){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }

return 0;
}
