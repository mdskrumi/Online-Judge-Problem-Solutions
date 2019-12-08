#include<bits/stdc++.h>
using namespace std;
int diff(int a , int b);
int main(){
        int all , st , fin , range, ans1 , ans2;
        while(cin>>all){
            st = 1;
            fin = all;
            range = all - st;
            for(st;st<=fin;st++){
                for(fin;fin >= st;fin--){
                    if(st*fin>all){
                       continue;
                    }if(st*fin<all){
                        break;
                    }
                    if(st*fin==all){
                           if(diff(fin,st)<=range || diff(fin , st)==0){
                            ans1 = st;
                            ans2 = fin;
                            range = diff(fin,st);
                          //  cout << range << endl;
                           }
                    }
                }
            }cout << ans1<<" " <<ans2 <<endl;
        }
return 0;
}
int diff(int a , int b){
    int p = a - b;
    return p;
}



