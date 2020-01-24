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

typedef vector <int> 	   	 vi;
typedef pair <int,long long> 	pii;

int main(){
    BOLT;
    int t = ini();
    while(t--){
        vector<pair<int,int> > coor;
        int n = ini();
        for(int i = 0 ; i < n ; i++){
            int x = ini() , y = ini();
            coor.pb({x,y});
        }
        coor.pb({0,0});
        sort(all(coor));
        vector<pair<int,char> > ans;
        for(int i = 1 ; i < coor.size() ; i++){
            if(coor[i-1].second > coor[i].second){
                n = -1;
                break;
            }
            ans.pb({coor[i].first - coor[i-1].first , 'R'});
            ans.pb({coor[i].second - coor[i-1].second , 'U'});
        }
        if(n!=-1){
            cout << "YES\n";
            for(int i = 0 ; i < ans.size() ; i++){
                for(int j = 0 ; j < ans[i].first ; j++){
                    cout << ans[i].second;
                }
            }
            cout << nl;
        }else {
            cout << "NO\n";
        }

        coor.clear();
        ans.clear();

    }

return 0;
}


