#include<bits/stdc++.h>
using namespace std;
int main(){

        int n , had;

        while(cin>>n && n!= 0){
                had = 0;
                while(n>=3){
                    had += n / 3;
                    n = (n/3) + (n%3);
                }
            if(n==2){
                had++;
            }
            cout <<had << endl;
        }

return 0;
}
