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
#define     CASE       cout << "Case " << kase++ << ": ";
#define     CASEN      cout << "Case " << kase++ << ":\n";

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

bool cmp(pair<string , int >a, pair<string , int >b){
    return (a.second < b.second);
}

int main(){
    BOLT;
    int t = ini() , kase = 1;
    while(t--){
        string num = ins();
        int div = ini() , j = 0;
        if(num[0] == '-') j++;
        ll quota = 1 , build = 0 ;
        string res = "";
        for( ; j < num.size() ; j++){
            build += (int)(num[j] - '0');
            //cout << "BUILD : " << build << " \n ";
            if(build < div && quota == 1){
                build*=10;
                continue;
            }else if(build < div && quota != 1){
                build*=10;
                res += '0';
                continue;
            }
            //cout << "DIVED : \n";
            res += (char)((build/div) + 48);
            build = (build%div) * 10;
            quota = 0;
        }
        CASE;
        if(build == 0){
            cout << "divisible\n";
        }else cout << "not divisible\n";
        //cout << res << nl;

    }

return 0;
}





