#include<bits/stdc++.h>,
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define DOS 10000000000
#define Reading(X) freopen("X" , "r" , stdin);
#define WRITING(Y) freopen("Y" , "w" , stdout);
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

bool operator<(pair<vector<char> , int > a , pair<vector<char> , int > b){
    return a.second < b.second;
}
/*-----------------------------------VARIABLES-----------------------------------------*/
/*-----------------------------------FUNCTIONS-----------------------------------------*/
int main(){

    string s;
    cin >> s;
    int link = 0 , p = 0;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i]=='o'){
            p++;
        }else link++;
    }
    if( p==0 || link==0 ||  p%link==0 || link%p==0) cout << "YES\n";
    else cout << "NO\n";

return 0;
}
