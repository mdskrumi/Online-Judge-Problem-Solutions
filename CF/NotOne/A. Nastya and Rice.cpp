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
#define     PIE                     acos(-1)
#define     pline                   cout << nl

using namespace std;

inline string deleteCharFromString(string &str , char c){
   str.erase(std::remove(str.begin(), str.end(), c), str.end());
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


int main(){
    int t = ini();
    while(t--){
        int n, a, b, c, d, flag = -1;
        cin >> n >> a >> b >> c >> d;

        int l = (a-b)*n;
        int r = (a+b)*n;

        int ml = c-d;
        int mr = c+d;

        while(l<=r){
            int m = l + (r-l)/2;
            if( m >= ml && m <= mr){
                flag = 1;
                break;
            }
            else if(m < ml){
                l = m + 1;
            }else{
                r = m - 1;
            }
        }

        if(flag==1){
            cout <<"Yes\n";
        }else{
            cout << "No\n";
        }
    }

return 0;
}



