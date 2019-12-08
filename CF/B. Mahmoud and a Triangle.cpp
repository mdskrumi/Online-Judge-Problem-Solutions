#include<bits/stdc++.h>
using namespace std;
int main(){

        int n;
        while(cin >> n){
                int x;
            vector<long long>arr;
            for(int i = 0 ; i < n ;i++){
                cin >> x;
                arr.push_back(x);
            }
            sort(arr.begin(),arr.end());
            char ans = 'f';
            for(int i = 2 ; i < n ; i++){
                if(arr[i] < arr[i-1] + arr[i-2]){
                    ans = 't';
                    break;
                }
            }
            if(ans=='t'){
                cout << "YES" <<endl;
            }
            else{
                cout <<"NO"<<endl;
            }
            arr.clear();
        }

return 0;
}
