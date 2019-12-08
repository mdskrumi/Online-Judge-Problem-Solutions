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

using namespace std;

int ini(){int n;cin >> n;return n;}
ll inl(){ll n;cin >> n;return n;}
double ind(){double n;cin >> n;return n;}
string ins(){string n;cin >> n;return n;}


typedef vector <int> 	   	 vi;
typedef pair <int,long long> 	pii;

int dx4[] = {0 , 0 , 1 , -1};
int dy4[] = {1 , -1 , 0 , 0};

int dx8[] = {0 , 0 , 1 , -1 , 1 , -1 , -1 , 1};
int dy8[] = {1 , -1 , 0 , 0 , 1 , -1  , 1 ,-1};

int lastDigit(int n){
    return n % 10;
}
int main(){
    BOLT;
    // TAKING;
    int n = ini();
    string s = ins();
    int eights = 0;
    for(int i = 0 ; i < s.size()-10 ; i++){
        if(s[i]=='8'){
            eights++;
        }
    }
    if(eights > (n-11)/2){
        cout <<"YES\n";
    }else cout << "NO\n";

return 0;
}



