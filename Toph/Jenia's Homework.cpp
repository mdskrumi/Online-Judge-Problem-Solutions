#include<bits/stdc++.h>
#include<ctype.h>
#include<string.h>

#include<stdio.h>

#define TAKING                      freopen("input.txt" , "r" , stdin);
#define MAKING                      freopen("output.txt","w" , stdout);

#define     ll                      long long
#define     sf                      scanf
#define     pf                      printf
#define     pb                      push_back
#define     mp                      make_pair
#define     nl                      "\n"
#define     BOLT                    ios_base::sync_with_stdio(0)

#define     all(x)                  x.begin(), x.end()
#define     rall(x)                 x.rbegin(), x.rend()
#define     fi                      first
#define     se                      second
#define     sz(v)                   (int)(v).size()
#define     REMOVE_ALL(str , c)     str.erase(remove(str.begin(), str.end(), c), str.end())
#define     PIE                     acos(-1)

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
        cout << setprecision(16) << fixed ;
        double a = ind();
        cout << a - (sqrt(a)/2)*(sqrt(a)/2)*PIE << " " << 2*PIE*(sqrt(a)/2) << nl;
    }
return 0;
}




