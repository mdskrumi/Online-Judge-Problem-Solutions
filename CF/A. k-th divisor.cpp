#include<bits/stdc++.h>
using namespace std;
int main(){
        long long n , k ;
        vector<long long>divs;
        while(cin >> n >> k){
                long long got = 0;
                for(long long i = 1; i <= sqrt(n);i++){
                    if((n % i) == 0){
                        divs.push_back(i);
                        if(i!=(n/i))divs.push_back((n/i));
                    }
                }
                sort(divs.begin(),divs.end());
                if(k > divs.size()){
                    cout << "-1" <<endl;
                }
                else{
                    cout << divs[k-1] <<endl;
                }
divs.clear();
        }
return 0;
}
