#include<bits/stdc++.h>
using namespace std;
int main(){

    int cola , emt , enj = 0;
    while(cin >> cola){
        enj = cola;
        while(cola>=3){
            enj +=(cola/3);
            cola = (cola/3)+(cola%3);
        }
        if(cola==2){
            enj++;
        }
        cout << enj << endl;

    }

return 0;
}



