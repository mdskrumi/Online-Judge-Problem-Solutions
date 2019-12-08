#include<bits/stdc++.h>,
#include<ctype.h>
#include<string.h>


#define     sf      scanf
#define     pf      printf
#define     pb      push_back
#define     mp      make_pair
#define     DOS     10000000000
#define     nl      "\n"

using namespace std;


int checkprime(int n){
    if(n < 2)return 0;
    for(int i = 2 ; i <= sqrt(n) ; i++){
        if(n%i==0)return 0;
    }
return 1;
}
int getLeapYear(int year){
  if ( year%400 == 0)return 1;
  else if ( year%100 == 0)return 0;
  else if ( year%4 == 0 )return 1;
  return 0;
}

int main(){
    // freopen("input.txt","r",stdin);
    int n , flag = 1;
    cin >> n;
    char s[n];
    cin.ignore();


    for(int i = 0 ; i < n ; i++){
        cin >> s[i];
        if(i>0){
            if(s[i-1]=='1' && s[i]=='1')flag  = 0;
        }
    }

    if(n==2){
        if(s[0]==s[1]) puts("NO");
        else puts("YES");
        return 0;
    }


    if(s[0]=='0' && s[1] == '0'){
        flag = 0;
    }

    if(s[n-1]=='0' && s[n-2] == '0'){
        flag = 0;
    }

    for(int i = 1 ; i < n ; i++){
        if(s[i]=='0' && s[i-1] == '0' && s[i+1]=='0')flag = 0;
    }

    if(flag){
        puts("YES");
    }else puts("NO");
return 0;
}


