#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;

/*-----------------------------------FUNCTIONS-----------------------------------------*/
int make_face(char d);
char get_face(int d);
int boundary(int a , int b);
/*-----------------------------------Variables-----------------------------------------*/
int dx[] = { 0 , 1  , 0  , -1};
int dy[] = { 1 , 0  , -1  , -0};
int dp[100][100];

int x , y , rx , ry ;
char d;
int main(){
        //Taking;Making;
        sf("%d%d",&x,&y);
        memset(dp,0,sizeof dp);
        while(sf("%d%d %c",&rx,&ry,&d)!=EOF){
            cin.ignore();
            string dic;
            cin >> dic;
            int go = make_face(d);
            for(int i = 0 ; i < dic.size() ; i++){
                if(dic[i]=='F'){
                    if(boundary(rx + dx[go],ry + dy[go]) == 1){
                       rx = rx + dx[go];
                       ry = ry + dy[go];
                    }
                    else{
                        if( dp[rx][ry] == 1 ){
                            continue;
                        }
                        else{
                            pf("%d %d %c LOST\n",rx,ry,get_face(go));
                            dp[rx][ry] = 1;
                            d = 'A';
                            //cout << "LAST Command : " << dic[i] << " MOVING According to " << get_face(go) << " -- " << rx << " " << ry <<endl;
                            break;
                        }
                    }
                }
                else if(dic[i]=='R'){
                    go = (go+1)%4;
                }
                else{
                    go = (4+(go-1))%4;
                }
                //cout << "Command : " << dic[i] << " MOVING According to " << get_face(go) << " -- " << rx << " " << ry <<endl;
            }
            if(d!='A')
            pf("%d %d %c\n",rx,ry,get_face(go));
        }


return 0;
}
int make_face(char d){
        if(d =='S'){
            return 2;
        }
        else if(d == 'N'){
            return 0;
        }
        else if(d == 'E'){
            return 1;
        }
        else if(d == 'W'){
            return 3;
        }
}
char get_face(int d){
    if(d ==2){
        return 'S';
    }
    else if(d == 0){
        return 'N';
    }
    else if(d == 1){
        return 'E';
    }
    else if(d == 3){
        return 'W';
    }
}
int boundary(int a , int b){
    if(a<0 || a>x || b < 0 || b > y){
        return 0;
    }
    return 1;
}
