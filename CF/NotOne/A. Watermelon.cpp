#include<bits/stdc++.h>
#include<ctype.h>
#include<string.h>

#include<stdio.h>

#define TAKING         freopen("input.txt" , "r" , stdin);
#define MAKING         freopen("output.txt","w" , stdout);

#define     ll         long long
#define     sf         scanf
#define     pf         printf
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
#define     NO         cout << "NO\n"
#define     YES        cout << "YES\n"
#define     IGNORE     cin.ignore()
#define     CASE       cout << "Case " << kase++ << ": ";
#define     CASEN      cout << "Case " << kase++ << ":\n";

using namespace std;


int ini(){int n;cin >> n;return n;}
ll inl(){ll n;cin >> n;return n;}
double ind(){double n;cin >> n;return n;}
string ins(){string n;cin >> n;return n;}
string insl(){string n;getline(cin,n);return n;}

/*
int ini(){int n;scanf("%d",&n);return n;}
ll inl(){ll n;scanf("%lld",&n);return n;}
double ind(){double n;scanf("%lf",&n);return n;}*/

int string_to_int(string s){int n;stringstream ss;ss << s;ss >> n;return n;}    // Same for double and long long
string int_to_string(int n){string s;stringstream ss;ss << n;ss >> s;return s;} // Same for double and long long

vector<string> toppers;

int mySearch(string s){
    for(int i = 0 ; i < toppers.size() ; i++){
        if(s==toppers[i]) return 1;
    }
    return 0;
}

int even(int n){
    if(n%2==0) return 1;
    return 0;
}

int main(){
    BOLT;
    int n = ini();
    if(n>2 && even(n)) YES;
    else NO;

return 0;
}





