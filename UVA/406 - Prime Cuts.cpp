#include <bits/stdc++.h>
using namespace std;
int prime[1500];
void makeprime();
int main(){
    makeprime();
    int n , c;
    while(cin >> n >> c){
            int f ;
            if(n%2==0){
                f = c*2;
            }else{
                f = 2*c -1;
            }
        vector<int>number;
        for(int i = 0 ; i <= n ; i++){
            if(prime[i]== 1){
                number.push_back(i);
            }
        }

        int len = number.size();
        int high , low ;
        if(len%2==0){
            high = len / 2 + c;
            low = len / 2 - c;
        }
        else if(len%2==1){
            low = len / 2 - c +1;
            high = len / 2 + c ;

        }
        if(low<0)low=0;
        if(high > (len-1))high = len;
        cout << n <<" "<<c <<": ";
        for(low ; low < high ;low++){
            cout << number[low] << " " ;
        }
         cout << endl <<endl;

        number.clear();

    }


return 0;
}

void makeprime(){
    for(int i = 0 ; i < 1500 ; i++){
        prime[i] = 1;
    }
    prime[0]=0;

    for(int i = 2 ; i <= sqrt(1500) ; i++){
            if(prime[i]==1){
        for(int j = 2 ; j*i < (1500/2);j++){
            prime[i*j] = 0;
            }
        }
    }
}
