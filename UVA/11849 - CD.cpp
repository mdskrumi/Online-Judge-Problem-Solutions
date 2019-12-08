#include <iostream>
using namespace std;

int main(){
            long long n , m;
            while(cin >> n >> m){
                    if(n == 0 && m == 0){
                        break;
                    }
                long long found = 0;
                long long jack[n],jill[m];
                for(long long i = 0 ; i < n ; i++){
                    cin >> jack[i];
                }
                for(long long i = 0 ; i < m ; i++){
                    cin >> jill[i];
                }

                for(long long i = 0; i < n ; i++){
                    long long temp = jack[i];
                    long long high = m-1;
                    long long low = 0;
                    long long mid = (high+low)/2;

                    while(1){
                        if(temp == jill[mid] || temp == jill[high] || temp == jill[low]){
                                found++;
                            break;
                        }
                        if(temp > jill[mid]){
                            low = mid + 1;
                        }
                        else if(temp < jill[mid]){
                            high = mid - 1;
                        }
                        mid = (high+low)/2;

                        if(low > high){
                            break;
                        }
                    }


                }cout << found << endl;
                found = 0;

            }


return 0;
}
