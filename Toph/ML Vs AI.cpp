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

struct Student{
    ll ac;
    ll sub;
    double rate;
};

int main(){
    BOLT;
    int n = ini();
    double totalAc = 0;
    vector<Student>v;
    for(int i = 0 ; i < n ; i++){
        Student s;
        s.ac = inl();
        s.sub = inl();
        s.rate = ((double)s.ac/(double)s.sub)*100;
        v.pb(s);
        totalAc+=s.ac;
    }
    totalAc = totalAc/n;
    int ans = 0;
    for(Student s : v){
        //cout << s.ac << " " << s.sub << " " << s.rate << " " << totalAc << nl;
        if(s.rate>= 70 && s.ac >= totalAc && s.ac >= 150){
            ans++;
        }
    }
    cout << ans << nl;

return 0;
}




