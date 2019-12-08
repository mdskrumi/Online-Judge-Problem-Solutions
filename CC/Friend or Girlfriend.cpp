#include<bits/stdc++.h>
#include<ctype.h>
#include<string.h>

#include<stdio.h>

#define TAKING         freopen("input.txt" , "r" , stdin);
#define MAKING         freopen("output.txt","w" , stdout);

#define     sf         scanf
#define     pf         printf
#define     ll         long long
#define     pb         push_back
#define     mp         make_pair
#define     DOS        10000000000
#define     nl         "\n"
#define     BOLT       ios_base::sync_with_stdio(0)

#define     all(x)     x.begin(), x.end()
#define     rall(x)    x.rbegin(), x.rend()
#define     fi         first
#define     se         second
#define     sz(v)      (int)(v).size()

using namespace std;



int main(){
    BOLT;
    int t , kase = 1;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        string s;
        char c;
        cin >> s >> c;
        long long ans = 0;
        int lastSize = s.size();
        for(int i = s.size()-1 ; i >= 0 ; i--){
            if(s[i]==c){
                ans+= (i+1)*(lastSize-i);
                lastSize = i;
            }
        }
        cout << ans << nl;
    }


return 0;
}






