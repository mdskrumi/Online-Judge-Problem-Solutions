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
inline ll inl(){ll n;cin >> n;return n;}
inline double ind(){double n;cin >> n;return n;}
inline string ins(){string n;cin >> n;return n;}
inline string insl(){string n;getline(cin,n);return n;}

inline int string_to_int(string s){int n;stringstream ss;ss << s;ss >> n;return n;}    // Same for double and long long
inline string int_to_string(int n){string s;stringstream ss;ss << n;ss >> s;return s;} // Same for double and long long
inline long long string_to_Long_Long(string s){ll res = 0;for(int i = 0 ; i < s.size() ; i++){res = res*10 + (s[i]-'0');}return res;}

typedef vector <int> 	   	 vi;
typedef pair <int,long long> 	pii;

int checkBound(int n , int m , int x , int y){
    if(x<0 || x >=n || y < 0 || y >=m)
        return 0;
    return 1;
}

int main(){
    BOLT;
    int n = ini() , m = ini();
    cin.ignore();
    vector<string>v;
    for(int i = 0 ; i < n ; i++){
        v.pb(insl());
    }
    int x = ini() , y = ini();
    --x,--y;
    string cmd = ins();
    if(v[x][y]=='O'){
        cout << "YES\n";
        return 0;
    }
    else
    for(char c : cmd){
        if(c == 'L'){
            while(v[x][y-1]!='*'){
                y = y - 1;
                if(v[x][y]=='O'){
                    cout << "YES\n";
                    return 0;
                }
            }
        }
        else if(c == 'R'){
            while(v[x][y+1]!='*'){
                y = y + 1;
                if(v[x][y]=='O'){
                    cout << "YES\n";
                    return 0;
                }
            }
        }
        else if(c == 'T'){
            while(v[x-1][y]!='*'){
                x = x - 1;
                if(v[x][y]=='O'){
                    cout << "YES\n";
                    return 0;
                }
            }
        }
        else if(c == 'B'){
            while(v[x+1][y]!='*'){
                x = x + 1;
                if(v[x][y]=='O'){
                    cout << "YES\n";
                    return 0;
                }
            }
        }
    }
    if(n != -1){
        cout << "NO\n";
    }
return 0;
}




