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
#define     pline                   cout << nl

using namespace std;


inline int ini(){int n;cin >> n;return n;}
inline int ini(string s){ cout << s; int n;cin >> n;return n;}

inline ll inl(){ll n;cin >> n;return n;}
inline ll inl(string s){ cout << s; ll n;cin >> n;return n;}

inline double ind(){double n;cin >> n;return n;}
inline double ind(string s){ cout << s; double n;cin >> n;return n;}

inline string ins(){string n;cin >> n;return n;}
inline string ins(string s){ cout << s;string n;cin >> n;return n;}

inline string insl(){string n;getline(cin,n);return n;}
inline string insl(string s){ cout << s;string n;getline(cin,n);return n;}

inline int string_to_int(string s){int n;stringstream ss;ss << s;ss >> n;return n;}    // Same for double and long long
inline string int_to_string(int n){string s;stringstream ss;ss << n;ss >> s;return s;} // Same for double and long long
inline long long string_to_Long_Long(string s){ll res = 0;for(int i = 0 ; i < s.size() ; i++){res = res*10 + (s[i]-'0');}return res;}

typedef vector <int> 	   	 vi;
typedef pair <int,long long> 	pii;

int get_Ans(string s){
    int num = 0;
    for(int i = 0 ; i < s.size() ; i++){
        num = num*10 + (s[i]-48);
        num%=11;
    }
    if(num==0)return 1;
    return 0;
}


int main(){
    BOLT;
    int n;
    while(cin >> n && n!=0 ){
        if(sqrt(n)*sqrt(n) == n){
            cout <<"yes\n";
        }else cout << "no\n";
    }

return 0;
}




