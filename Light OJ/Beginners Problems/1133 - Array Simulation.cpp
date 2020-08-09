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
#define     NO         cout << "NO\n"
#define     YES        cout << "YES\n"
#define     IGNORE     cin.ignore()

using namespace std;


int ini(){int n;cin >> n;return n;}
ll inl(){ll n;cin >> n;return n;}
double ind(){double n;cin >> n;return n;}
string ins(){string n;cin >> n;return n;}
string insl(){string n;getline(cin,n);return n;}

/*
int ini(){int n;scanf("%d",&n);return n;}
ll inl(){ll n;scanf("%lld",&n);return n;}
double ind(){double n;scanf("%lf",&n);return n;}*/

int string_to_int(string s){int n;stringstream ss;ss << s;ss >> n;return n;}    // Same for double and long long
string int_to_string(int n){string s;stringstream ss;ss << n;ss >> s;return s;} // Same for double and long long

void print(vector<int> n){
    cout <<  n[0];
    for(int i = 1 ; i < n.size() ; i++){
        cout << " " << n[i];
    }
    cout << nl;
}

int main(){
    BOLT;
    int t = ini() , kase = 1;
    while(t--){
        int a = ini() , b = ini();
        vector<int>v;
        cout << "Case " << kase++ << ":\n";
        for(int i = 0 ; i < a ; i++){
            v.pb(ini());
        }
        //print(v);
        while(b--){
            char c;
            cin >> c;
            if(c=='S'){
                a = ini();
                for(int i = 0 ; i < v.size() ; i++){
                    v[i]+=a;
                }
            }
            else if(c=='M'){
                a = ini();
                for(int i = 0 ; i < v.size() ; i++){
                    v[i]*=a;
                }
            }
            else if(c=='D'){
                a = ini();
                for(int i = 0 ; i < v.size() ; i++){
                    v[i]/=a;
                }
            }
            else if(c=='R'){
                reverse(all(v));
            }
            else if(c=='P'){
                swap(v[ini()],v[ini()]);
            }
            //print(v);
        }
        print(v);
        v.clear();

    }

return 0;
}





