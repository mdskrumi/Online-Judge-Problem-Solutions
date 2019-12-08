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

int main(){
    BOLT;
    int t = ini() , kase = 1;
    IGNORE;
    while(t--){
        vector<string>v(102);
        v[0]="http://www.lightoj.com/";
        int index = 0;
        cout << "Case " << kase++ << ":\n";
        while(1){
            string cmd = ins();
            if(cmd=="VISIT"){
                cmd = ins();
                v[index+1] = cmd;
                index++;
                cout << v[index] << nl;
                for(int j = index+1 ; j<=100 ; j++)
                    v[j] = "";
            }
            else if(cmd=="BACK"){
                index--;
                if(index<0){
                    cout << "Ignored\n";
                    index++;
                }else
                    cout << v[index] << nl;
            }
            else if(cmd=="FORWARD"){
                index++;
                if(v[index]==""){
                    cout << "Ignored\n";
                    index--;
                }else
                    cout << v[index] << nl;
            }
            else if(cmd=="QUIT"){
                break;
            }
        }
        v.clear();
    }

return 0;
}





