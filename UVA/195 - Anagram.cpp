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
#define     FLASH   ios_base::sync_with_stdio(0)


using namespace std;



bool comp(char a, char b){
    if(tolower(a) == tolower(b))
        return a < b;
return tolower(a) < tolower(b);
}


int main(){
    FLASH;
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        char c[10000];
        cin >> c;
        sort(c,c+strlen(c),comp);
        do{
           cout << c << nl;
        }while(next_permutation(c,c+strlen(c),comp));

    }

return 0;
}
