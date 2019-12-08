#include<bits/stdc++.h>
using namespace std;
int main(){

        vector<int>numbers,difs;
        int n , temp;

        while(cin >> n){
                difs.clear();
                numbers.clear();
            for(int i = 0; i < n ; i++){
                cin >>temp;
                numbers.push_back(temp);
                if(i >= 1){
                    difs.push_back(abs(numbers[i]-numbers[i-1]));
                }
            }
                if(n==1){
                cout << "Jolly" <<endl;
                continue;
                }
            sort(difs.begin(),difs.end());
            char t = 'f';
            for(int i = 0 ; i < n-1 ; i++){
                if(difs[i]!=(i+1)){
                    cout << "Not jolly"<<endl;
                    t = 't';
                    break;
                }
            }if( t=='f'){
                 cout << "Jolly"<<endl;
                }
        }

return 0;
}
