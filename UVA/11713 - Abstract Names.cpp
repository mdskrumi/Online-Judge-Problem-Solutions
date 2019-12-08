#include<bits/stdc++.h>
using namespace std;
int check(char a);
int main(){

        int t;
        string a,b;
        cin >>t ;
        while(t-->0){
            cin >> a >> b;
            if(a.size()!=b.size()){
                cout << "No" <<endl;
                continue;
            }
            char t  = 'f';
            for(int i = 0 ; i < a.size() ; i++){
                if(a[i]!=b[i]){
                    if(check(a[i])== 1 && check(b[i])==1){
                        continue;
                    }else{
                        cout << "No" <<endl;
                        t = 't';
                    break;
                    }
                }
            }if(t!='t'){
            cout << "Yes" <<endl;
            }
        }
return 0;
}
int check(char a){
    if(a=='a' || a == 'e' || a=='o' || a == 'i' || a== 'u'){
        return 1;
    }
return 0;
}
