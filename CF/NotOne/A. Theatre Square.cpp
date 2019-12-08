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

bool cmp(pair<string , int >a, pair<string , int >b){
    return (a.second < b.second);
}

int checkPalindrom(string s){
    for(int i = 0 , j = s.size()-1 ; i<j ; i++,j--)if(s[i]!=s[j])return 0;
return 1;
}

int main(){
    BOLT;
    ll a = inl() , b = inl() , c = inl() , x = 1 , y = 1;

    if(a>c){
        x = (a/c);
        if(a%c!=0) x++;
    }
    if(b>c){
        y = (b/c);
        if(b%c!=0) y++;
    }

    cout << x*y << nl;


return 0;
}





