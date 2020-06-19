#include <bits/stdc++.h>
using namespace std;
 
#define BOLT ios_base::sync_with_stdio(0)
#define newline cout << "\n"
#define eline cerr << "\n"
#define IN_FILE freopen("input.txt", "r", stdin);
#define OUT_FILE freopen("output.txt", "w", stdout);
 
 
void USEFILE(){
    IN_FILE;
    OUT_FILE
}


const string s = "codeforces";
void showOutput(long long arr[]){
    for(int i = 0 ; i < 10; i++){
        while(arr[i]--) cout << s[i];
    }
} 
 
void solve(int kase){
    long long k;
    cin >> k;
    long long arr[10];
    for(int i = 0; i < 10; i++) arr[i] = 1;

    long long res = 1;

    for(int i = 0 ; i < 10 ; i++)
        res*=arr[i];

    if(res>=k){
        showOutput(arr);
    }else{
        int i = 0;
        while(res < k){
            arr[i]++;
            i = i + 1;
            i%=10;
            res = 1;
            for(int j = 0 ; j < 10 ; j++)
                res*=arr[j];
        }showOutput(arr);
    }
}
 
int main()
{
    BOLT;
    //USEFILE();
    int t, kase = 0;
    /*cin >> t;
    while(t--)*/
        solve(++kase);
    return 0;
}