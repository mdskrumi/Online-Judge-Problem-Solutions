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
    int t;
    while(cin >>t && t!= -1){
        cout << "Round " << t << nl;
        cin.ignore();
        string a , b;
        cin >> a >> b;
        int st = 0 , ans = 0, win = 3 ;
        for(int i = 0 ; i < b.size() && win == 3 ; i++){
            char g = b[i];
            if(g == '0')continue;
            for(int j = i ; j < b.size() ; j++){
                if(g == b[j]) b[j] = '0';
            }
            int sted = 1;
            for(int j = 0 ; j < a.size() && win == 3 ; j++){
                if(g == a[j]){
                    ans++;
                    a[j] = '0';
                    sted = 0;
                    if(ans==a.size()){
                        win = 1;
                        cout << "You win.\n";
                    }
                }
            }
            if(sted == 1)st++;
            if(st>=7){
                win = -1;
                cout << "You lose.\n";
            }
        }
        if(win == 3){
               cout << "You chickened out.\n";
        }
    }
return 0;
}


