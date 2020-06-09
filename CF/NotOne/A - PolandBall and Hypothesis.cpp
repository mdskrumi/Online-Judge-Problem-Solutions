#include <bits/stdc++.h>
using namespace std;
 
#define BOLT ios_base::sync_with_stdio(0)
#define newline cout << "\n"
#define IN_FILE freopen("input.txt", "r", stdin);
#define OUT_FILE freopen("output.txt", "w", stdout);
 
void USEFILE(){
    IN_FILE;
    OUT_FILE
}
 
 
bool isPrime(int n){
    if(n<=2) return true;
    for(int i = 2 ; i <= sqrt(n) ; i++){
        if(n % i == 0) return false;
    }
    return true;
}
 
void solve(){
    int n;
    cin >> n;
    
    for(int i = 1; i <= 1000 ; i++)
        if( !isPrime( (n*i) +1)){
            cout << i;
            break;
        }
 
    newline;
}
 
int main()
{
    BOLT;
    // USEFILE();
    solve();
    return 0;
}