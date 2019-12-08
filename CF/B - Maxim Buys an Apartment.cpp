#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
#define pb push_back
using namespace std;

int main(){
    long long a , b;
    while(sf("%lld%lld",&a,&b)!=EOF){
        if(a==b || b == 0){
            cout << "0 0\n";
        }
        else if(a/2 <= b){
            cout << "1 "<< a-b <<endl;
        }
        else if(a/2 > b){
            cout <<"1 "<< min(b*2 , a-b) <<endl;
        }
    }
return 0;
}

