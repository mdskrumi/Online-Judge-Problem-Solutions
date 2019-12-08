#include<bits/stdc++.h>,
#include<ctype.h>
#include<string.h>

#define TAKING      freopen("input.txt" , "r" , stdin);
#define MAKING      freopen("output.txt","w" , stdout);

#define     sf      scanf
#define     pf      printf
#define     pb      push_back
#define     mp      make_pair
#define     DOS     10000000000
#define     nl      "\n"
#define     BOLT   ios_base::sync_with_stdio(0)


using namespace std;

int CP(char x[] , int len){
    for(int i = 0 , j = len-1 ; i<j ; i++,j--){
        if(x[i]!=x[j])return 0;
    }
return 1;
}


int main(){
    BOLT;
    //TAKING;MAKING;
    string sen;
    while(getline(cin,sen) && sen!="DONE"){
        char dup[10000] = "";
        for(int i = 0 , j = 0; i < sen.size() ; i++){
            if(isalpha(sen[i])){
                dup[j++]=tolower(sen[i]);
            }
        }

        if(CP(dup,strlen(dup))){
             cout << "You won't be eaten!" << nl;
        }else cout << "Uh oh..\n";
    }

return 0;
}
