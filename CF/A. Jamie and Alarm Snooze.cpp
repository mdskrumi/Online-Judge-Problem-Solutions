#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
/*-----------------------------------FUNCTIONS-----------------------------------------*/
int check7(int num);
/*-----------------------------------Variables-----------------------------------------*/

int main(){
       // Taking;Making;
        int x;
        int hh , mm;
        cin >> x;
        cin >> hh >> mm;
        int ans = 0;
           for(int i = hh ; i >= 0 ; i--){
                while(mm>=0){
                    if(check7(i) || check7(mm)){
                        cout << ans <<endl;
                       return 0;
                    }
                  //  cout << i << " : " << mm <<endl;
                    mm = (mm-x) %60;
                    ans++;
                }
                mm = 60 + mm;
                if(i==0){
                    i=24;
                }
               // if(ans>=500)break;
               // cout << "\t\t\t\t\t\t\t\t" << ans <<endl;
            }


return 0;
}
int check7(int num){
    while(num){
        int c = num%10;
        if(c==7)return 1;
        num/=10;
    }
return 0;
}
