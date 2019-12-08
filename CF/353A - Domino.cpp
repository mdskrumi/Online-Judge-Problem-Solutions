#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , x , y , sumx =0 , sumy =0;
    cin >> n;
    vector<int>upper,lower;

    for(int i = 0 ; i < n;i++ ){
        cin >> x >> y;
        upper.push_back(x);
        lower.push_back(y);
        sumx+=x;
        sumy+=y;
    }
    if(sumx%2==0 && sumy%2==0){
        cout << 0 <<endl;
        return 0;
    }
    if(sumx%2==1 && sumy%2==1){
        for(int i = 0 ; i < n ; i++){
            if((upper[i]%2==0 && lower[i]%2==1) || (upper[i]%2==1 && lower[i]%2==0)){
                cout << 1 <<endl;
                return 0;
            }
        }
    }
    cout << -1 <<endl;

return 0;
}
