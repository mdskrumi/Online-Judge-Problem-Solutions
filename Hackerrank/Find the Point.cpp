#include<iostream>
using namespace std;
int main(){

    int t, p1 , p2 , q1, q2 , r1 , r2;
    cin >> t;
    while(t--){
    cin >> p1 >> p2 >> q1 >> q2 ;

    r1 = (q1-p1)+(q1);
    r2 = (q2-p2)+(q2);
    cout << r1 << " " << r2 <<endl;
    }
return 0;
}
