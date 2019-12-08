#include<bits/stdc++.h>,
#include<ctype.h>
#include<string.h>

#define TAKING      freopen("input.txt" , "r" , stdin);
#define MAKING      freopen("output.txt","w" , stdout);

#define     sf      scanf
#define     pf      printf
#define     pb      push_back
#define     mp      make_pair
#define     DOS     10000000000
#define     nl      "\n"

using namespace std;

int day = 0;

int solve(double h , double c , double d , double f){

    double now = 0;
    while(1){
        day++;
        now = now + c;
        //cout << "Day : " << day << " . Can Climb : " << c << " . Position : " << now << ". Will Drop " << d <<endl;
        c = c - f;
        if(c<0)c = 0;
        if(now>h) {
          //  cout << "Night : " << day << " . Position : " << now << " .Can Climb : " << c <<endl << endl;
                return 1;
        }
        now-=d;
        //cout << "Night : " << day << " . Position : " << now << " .Can Climb : " << c <<endl << endl;
        if(now<0) return -1;
    }


}

int main(){
    //TAKING;MAKING;
    double h , c , d , f;
    while(cin >> h >> c >> d >> f && h != 0){
        day = 0;
        int ans = solve(h,c,d,c*f/100);
        if(ans!=-1){
            pf("success on day %d\n",day);
        }else pf("failure on day %d\n",day);
    }

return 0;
}
