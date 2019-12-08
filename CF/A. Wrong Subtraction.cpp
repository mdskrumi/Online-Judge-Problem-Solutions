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

    string s;
    int k , i ;
    cin >> s >> k;
    for(i = s.size()-1 ; k!=0 ;){
        if(s[i]=='0'){
            k--;
            i--;
            continue;
        }
        else{
            int last = (int)s[i];
            last-=48;
            if(last > k){
                last -= k;
                k = 0;
                s[i] = 48 + last ;
            }else{
                k-=last;
                s[i] = '0';
            }
        }
    }
    for(k = 0 ; k <= i ; k++){
        cout << s[k] ;
    }
return 0;
}
