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

long long string_to_Long_Long(string s){ll res = 0;for(int i = 0 ; i < s.size() ; i++){res = res*10 + (s[i]-'0');}return res;}

double taxCal(double income , double value , double per){
    double tax;
    if(income > value){
        tax = value*per;
    }else{
        tax = income*per;
    }
    return (tax);
}

int main(){
    BOLT;
    //TAKING;MAKING;
    int t = ini() , kase = 1;
    while(t--){

        double income = ini() ;
        double tax = 0;
        tax+=taxCal(income, 180000 , 0.0);
        income = max(0.0, income - 180000);

        tax+=taxCal(income, 300000 , 0.1);
        income = max(0.0, income - 300000);

        tax+=taxCal(income, 400000 , 0.15);
        income = max(0.0, income - 400000);

        tax+=taxCal(income, 300000 , 0.2);
        income = max(0.0, income - 300000);

        tax+= income*.25;
        tax = ceil(tax);
        cout << "Case " << kase++ << ": ";
        if(tax==0)cout << 0 << nl;
        else cout << max((long)2000,(long)tax) << nl;

    }

return 0;
}






