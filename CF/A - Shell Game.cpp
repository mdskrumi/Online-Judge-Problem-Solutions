#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int pika[4] , a , b , n;
    int i;
    for(i = 0 ; i < 4 ; i++){
        pika[i]=0;
    }

    cin >> n;
    pika[n] = 1;
    i = 3;
    while(i-->0){
        cin >> a >> b;
        swap(pika[a],pika[b]);
    }
    for(i = 0 ; i < 4 ; i++){
        if(pika[i]==1){
            break;
        }
    }
    cout << i <<endl;
return 0;
}
