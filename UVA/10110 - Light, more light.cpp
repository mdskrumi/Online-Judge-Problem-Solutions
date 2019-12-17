#include<bits/stdc++.h>
#include<ctype.h>
#include<string.h>

#include<stdio.h>

#define TAKING     freopen("input.txt" , "r" , stdin);
#define MAKING     freopen("output.txt","w" , stdout);
#define BOLT       ios_base::sync_with_stdio(0)
#define nl         '\n';


using namespace std;

int main(){
    BOLT;
    long long int n;
    while(cin >> n && n!=0 ){
        long long x = sqrt(n);
        if(x*x == n){
            cout <<"yes\n";
        }else cout << "no\n";
    }

return 0;
}




