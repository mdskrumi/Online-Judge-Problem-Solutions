#include<bits/stdc++.h>,
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define DOS 10000000000
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
/*-----------------------------------FUNCTIONS-----------------------------------------*/
void GO();
int getI(char x);
/*-----------------------------------Variables-----------------------------------------*/
int dx[] = { 0 , 1};
int dy[] = { 1 , 0};
int n , ans;
string com;

int main(){

    sf("%d",&n);
    cin.ignore();
    cin >> com;
    ans = 0;
    GO();
    pf("%d\n",ans);
return 0;
}
void GO(){
    int inx = 0 , iny = 0;
    for(int i = 0 ; i < com.size() ; i++){
        int g = getI(com[i]);
        if(i!=0){
            if(inx==iny && com[i-1]==com[i]){
                ans++;
            }
        }
        inx+=dx[g];
        iny+=dy[g];
    }
}
int getI(char x){
    if(x=='R')
        return 1;
    return 0;
}
