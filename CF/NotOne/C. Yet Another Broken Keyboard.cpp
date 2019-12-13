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

inline ll value(ll n){
    return n*(n+1)/2;
}

int main(){
    BOLT;
    ll n = inl() , m = inl();
    string str = ins();
    set<char>keys;
    while(m--){
        char c ;
        cin >> c;
        keys.insert(c);
    }
    string s = "";
    for(ll i = 0 ; i < str.size() ; i++){
        if(find(all(keys),str[i]) == keys.end()) s+='-';
        else s+=str[i];
    }
    ll i = 0 , j = 0 ;
    ll ans = 0;
    while(i<s.size() && j < s.size()){
        if(s[j]!='-'){
            j++;
        }else{
            ans += value(abs(i-j));
            i = j+1;
            j = i;
        }
    }
    if(s[j-1]!='-'){
        ans += value(abs(i-j));
    }

    cout << ans << nl;

return 0;
}
