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

using namespace std;


int main(){
    string a;
    string b;
    while(getline(cin,a)){
        int one = 0, two = 0 ;
        for(int i = 0 ; i < a.size() ; i++){
            if(isalpha(a[i])){
                a[i] = tolower(a[i]);
                one+= (a[i]) - 96;
            }
        }
        getline(cin,b);
        for(int i = 0 ; i < b.size() ; i++){
            if(isalpha(b[i])){
                b[i] = tolower(b[i]);
                two+= (b[i]) - 96;
            }
        }
        if(one%9==0)one = 9;
            else one%=9;
        if(two%9==0)two = 9;
            else two%=9;

        pf("%.2f ",((float)one>(float)two)? ((float)two*100)/(float)one : ((float)one*100)/(float)two );
        puts("%");

    }


return 0;
}
















