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
#define     OO         0xfffffff
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

int main(){
    int n;
    while(cin >> n){
        ll graph[n][n];
        for(int i = 0 ; i < n ; i++)
            graph[i][i] = 0;
        for(int i = 1 ; i < n ; i++){
            for(int j = 0 ; j < i; j++){
                string s = ins();
                if(s!="x"){
                    graph[i][j] = graph[j][i] = string_to_Long_Long(s);
                }else graph[i][j] = graph[j][i] = INT_MAX;
            }
        }
         for(int k = 0 ; k < n ; k++){
            for(int i = 0 ; i < n; i++){
            if(i==k)continue;
               for(int j = 0 ; j < n ; j++){
                    if(graph[i][j] > graph[i][k] + graph[k][j] ){
                        graph[i][j] = graph[i][k] + graph[k][j];
                    }
               }
            }
        }
        ll ans = 0;
        for(int i = 1 ; i < n ; i++){
            ans = max(ans , graph[0][i]);
        }
        cout << ans << nl;

    }

return 0;
}





