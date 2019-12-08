#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
/*-----------------------------------FUNCTIONS-----------------------------------------*/
/*----------------------------------Variables-----------------------------------------*/
int main(){
        //Taking;Making;
        int n , m;
        string s;
        cin >> n >> m;
        cin.ignore();
        cin >> s;
        int inow = 0;
        int ans = 0;
        while(inow!=-1 ){
            ans++;
          //  cout << "STEP : " << ans <<endl;
            int lili = -1;
            for(int i = inow+1 ; i <= (m+inow) ; i++){
                if(s[i] == '1'){
                    lili = i;
                    //cout << "  LILY AT " << lili <<endl;
                }
                if(i == n-1){
                    cout << ans << "\n";
                    return 0;
                }
            }
            inow = lili;
          //  cout << "     NOW AT " << inow <<endl;
        }
        cout << "-1\n";
return 0;
}
