#include<bits/stdc++.h>
using namespace std;
int main(){
 /*   freopen("A-small-practice.in", "r", stdin);
    freopen("output.in", "w", stdout);*/

    long long n , k ,t;
    cin >> n >> k;
    long long check1, check2;
    vector<long long> prices;
    for(int i = 0 ; i < n ; i++){
        cin >> t;
        prices.push_back(t);
        check1 = prices[0] % k;
        check2 = prices[i] % k;
        if(check2 != check1){
            cout << -1 << endl;
            return 0;
        }
    }
    sort(prices.begin(),prices.end());
    long long sum=0;
    for(int i = 0 ; i < n ; i++){
        sum+=prices[i]-prices[0];
    }

    cout << sum/k <<endl;





return 0;
}
