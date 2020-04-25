#include<bits/stdc++.h>
#include<ctype.h>
#include<bits/stdc++.h>
#include<ctype.h>
#include<string.h>

#include<stdio.h>

#define     INPUT                   freopen("input.txt" , "r" , stdin);
#define     OUTPUT                  freopen("output.txt","w" , stdout);

#define     ll                      long long
#define     sf                      scanf
#define     pf                      printf
#define     pb                      push_back
#define     mp                      make_pair
#define     nl                      "\n"
#define     BOLT                    ios_base::sync_with_stdio(0)

#define     all(x)                  x.begin(), x.end()
#define     rall(x)                 x.rbegin(), x.rend()
#define     max3(a,b,c)             max(a,max(b,c))
#define     min3(a,b,c)             min(a,min(b,c))
#define     fi                      first
#define     se                      second
#define     sz(v)                   (int)(v).size()
#define     REMOVE_ALL(str , c)     str.erase(remove(str.begin(), str.end(), c), str.end())
#define     PIE                     acos(-1)
#define     pline                   cout << nl

using namespace std;

inline string delSpaces(string &str){
   str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
   return str;
}



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

inline int char_to_num(char c){return (c-48);}

typedef vector <int> 	   	 vi;
typedef pair <int,long long> 	pii;

bool isPossible(string s, int n){
    int i = 0;
    while(i < s.size()){
        int newI = -1;
        for(int j = 1 ; j <= n ; j++){
            if(i+j == s.size()){
                newI = i+j;
                break;
            }
            if(s[i+j]=='R'){
                newI = i+j;
            }
        }
        i = newI;
        if(i == -1)break;
    }
    if(i==-1) return false;

return true;
}


int main(){
    BOLT;
    int t = ini();
    while(t--){
        string str = ins()+'R';
        string s = "R";
        s+=str;
        int l = 0;
        int r = s.size();
        int res = INT_MAX;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(isPossible(s, mid)){
                res = min(res, mid);
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        cout << res << nl;
    }
return 0;
}



