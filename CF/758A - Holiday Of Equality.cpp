#include <bits/stdc++.h>
using namespace std;
int main(){
            int n ;
            vector <int> a;
            vector<int>::iterator it;
            while(cin >> n){
                for(int i = 0 ; i < n ; i++){
                    int x;
                    cin >> x;
                    a.push_back(x);
                }
                sort(a.begin(), a.end());
                long long ans = 0;
                for(int i = 0 ; i < n ; i++){
                    ans += (a.back()-a.at(i));
                }
                cout << ans <<endl;
                a.clear();
            }
return 0;
}
