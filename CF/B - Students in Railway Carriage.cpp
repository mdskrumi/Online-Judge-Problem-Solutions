#include<bits/stdc++.h>,
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define DOS 10000000000
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
int n , a , b;
/*-----------------------------------FUNCTIONS-----------------------------------------*/
char maxab(){
    if(a==0 && b==0){
        return 'n';
    }
    if(a>b){
        return 'a';
    }
    return 'b';
}
void dec(char x){
    if(x=='a'){
        a--;
    }else{
        b--;
    }
}
/*-----------------------------------Variables-----------------------------------------*/
int main(){
    string s;
    sf("%d%d%d",&n,&a,&b);
    cin.ignore();
    cin >> s;
    int ans = 0;
    for(int i = 0 ; i < s.size() ; i++){

        char get = maxab();
        if(get == 'n'){
            break;
        }
        if(s[i]=='.'){
            if(i==0){
                s[i] = get;
                dec(get);
                ans++;
            }
            else if(s[i-1]=='*'){
                s[i]=get;
                dec(get);
                ans++;
            }else if(s[i-1]=='a' && b != 0){
                s[i]='b';
                dec('b');
                ans++;
            }else if(s[i-1]=='b' && a != 0){
                s[i]='a';
                dec('a');
                ans++;
            }
            else {
                s[i] = '*';
            }
        }
    }
    pf("%d\n",ans);
return 0;
}
