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

using namespace std;

inline int ini(){int n;cin >> n;return n;}
inline ll inl(){ll n;cin >> n;return n;}
inline double ind(){double n;cin >> n;return n;}
inline string ins(){string n;cin >> n;return n;}
inline string insl(){string n;getline(cin,n);return n;}

inline int string_to_int(string s){int n;stringstream ss;ss << s;ss >> n;return n;}    // Same for double and long long
inline string int_to_string(int n){string s;stringstream ss;ss << n;ss >> s;return s;} // Same for double and long long
inline long long string_to_Long_Long(string s){ll res = 0;for(int i = 0 ; i < s.size() ; i++){res = res*10 + (s[i]-'0');}return res;}

typedef vector <int> 	   	 vi;
typedef pair <int,long long> 	pii;


int main(){
    BOLT;
    int t = ini();
    while(t--){
        string s = ins();
        int l , r , u , d;
        l = r = d = u = 0;
        for(char c : s){
            if(c=='L')l++;
            else if(c=='R')r++;
            else if(c=='D')d++;
            else if(c=='U')u++;
        }
        int x = min(r,l);
        int y = min(d,u);
        if(x!=0 && y!=0){
            cout << 2*x + 2*y << nl;
            for(int i = 0 ; i < x ; i++)
                cout << "R";
            for(int i = 0 ; i < y ; i++)
                cout << "U";
            for(int i = 0 ; i < x ; i++)
                cout << "L";
            for(int i = 0 ; i < y ; i++)
                cout << "D";
        }
        else if(x>0){
            cout << 2 << nl;
            cout << "LR";
        }
        else if(y>0){
            cout << 2 << nl;
            cout << "UD";
        }else cout << 0;
        cout << nl;

    }
return 0;
}



