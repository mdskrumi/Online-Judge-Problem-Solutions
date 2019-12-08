#include<bits/stdc++.h>
using namespace std;
int main(){
    int m ,x, y;

    cin >> m;
    int c[m];

    for(int i = 0 ; i < m ; i++){
        cin >> c[i];
    }
    cin >> x >> y;
    int g1 = 0 , g2 = 0;

    for(int i = 1 ; i < m ;i++){
        g1+=c[i-1];
        if(g1 >= x && g1 <=y){
            for(int j = i ; j < m ; j++){
                    g2+=c[j];
            }
            if(g2>=x && g2 <= y){
                cout << (i+1) <<endl;
                return 0;
            }
            g2 = 0;
        }
    }
    cout << 0 <<endl;

return 0;
}
