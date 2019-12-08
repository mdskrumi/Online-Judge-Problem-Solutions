#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define DOS 100000000000
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
/*-----------------------------------FUNCTIONS-----------------------------------------*/

/*-----------------------------------Variables-----------------------------------------*/

int main(){
        //Taking;Making;

        float hh , mm;
        float h , d , c , n;
        cin >> hh >> mm;
        cin >> h >> d >> c >> n;
        float ans1 = ceil(h/n)*c;
        float add = min((float)0,(-20+(hh+1))*60-60+mm);
        add = abs(add*d);
       // cout << "A :" << add <<endl;
        c=(c*80/100);
        float ans2 = ceil( (h+add) /n)*c;
      //  cout << ans1 << endl << ans2 <<endl;
        printf("%.4f\n",min(ans1,ans2));


return 0;
}

