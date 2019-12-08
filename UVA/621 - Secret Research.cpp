#include<bits/stdc++.h>,
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define DOS 10000000000
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
#include<ctype.h>
#include<string.h>
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

/*-----------------------------------VARIABLES-----------------------------------------*/
/*-----------------------------------FUNCTIONS-----------------------------------------*/
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        int l = s.size();
        if(s== "1" || s=="4" || s== "78"){
            puts("+");
        }
        else if(s[l-1]=='5' && s[l-2]=='3'){
            puts("-");
        }
        else if(s[0]=='9' && s[l-1]=='4'){
            puts("*");
        }
        else if(s[0]=='1' && s[1]=='9' && s[2] == '0') puts("?");
        else puts("+");
    }

return 0;
}






