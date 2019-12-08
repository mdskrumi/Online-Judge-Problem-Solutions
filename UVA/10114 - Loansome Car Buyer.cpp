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
string insl(){string n;getline(cin,n);return n;}

/*
int ini(){int n;scanf("%d",&n);return n;}
ll inl(){ll n;scanf("%lld",&n);return n;}
double ind(){double n;scanf("%lf",&n);return n;}*/



int dx4[] = {0 , 0 , 1 , -1};
int dy4[] = {1 , -1 , 0 , 0};

int dx8[] = {0 , 0 , 1 , -1 , 1 , -1 , -1 , 1};
int dy8[] = {1 , -1 , 0 , 0 , 1 , -1  , 1 ,-1};

vector<pair<int,double> > v;

double getDamage(int month){
    double send = v[0].second;
    for(int i = 0 ; i < v.size() ; i++){
        if(v[i].first > month){
            break;
        }
        send = v[i].second;
    }
return send;
}
int main(){
        BOLT;
        while(1){
            v.clear();
            int month = ini();
            double dPay = ind() , loan = ind() , ans[month+5];
            int record = ini();
            if(month<0){
            	break;
            }
            for(int i = 0 ; i < record ; i++){
                int x = ini();
                double y = ind();
                v.pb({x,y});
            }
            double value = loan + dPay;
            double owe = loan;

            for(int i = 0 ; i <= month ; i++){
                double red = (value*getDamage(i));
                value = value - red;
                if(i!=0)
                    owe = owe - (loan/(double)month);
                    ans[i] = owe - value;
            }

            for(int i = 0 ; i <= month ; i++){
                if(ans[i] <= 0){
                    if(i==1){
                        cout << "1 month\n";
                    }else
                        cout << i << " months\n";
                    break;
                }
            }
        }

return 0;
}




