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

inline int num(char c){
    return (c-48);
}

int main(){
    BOLT;
    int t = ini();
    while(t--){
        int n = ini();
        int arr[n] , dup[n];
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
            dup[i] = arr[i];
        }
        int ele = 0;
        int i , j , flag = 1;
        for(i = 0 , j = n-1; i < j ; i++,j--){
            if(arr[i]<ele || arr[j]<ele){
                flag = -1;
                break;
            }
            arr[i] = arr[j] = ele;
            ele++;
        }

       // cout << i << " " << j << nl;
        if(i==j){
            if(arr[i] < ele){
                flag = -1;
            }
        }
        else if( i>j && (dup[i] > arr[i] || dup[j] > arr[j])){
            flag = 1;
        }else flag = -1;


        if(flag == 1) cout << "Yes\n";
        else cout << "No\n";


      /*  for(int i : arr){
            cout << i << " ";
        }
        pline;*/



    }
return 0;
}



