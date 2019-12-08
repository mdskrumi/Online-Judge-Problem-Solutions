#include<bits/stdc++.h>
using namespace std;
int main(){

        int n , m;
        vector<string>v;
        string marks;
        cin >> n >> m;
        for(int i = 0 ; i < n ; i++){
            cin >> marks;
            v.push_back(marks);
        }
        char a[m];
        for(int i = 0 ; i < m ; i++){
            char best = '0';
            for(int j = 0 ; j < n ; j++){
                if(v[j][i] >= best){
                   best = v[j][i];
                   a[i] = best;
                }
            }
        }int best = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(v[i][j]==a[j]){
                    best++;
                    break;
                }
            }
        }
        cout <<best <<endl;
return 0;
}

