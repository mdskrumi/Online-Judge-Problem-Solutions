#include<bits/stdc++.h>
using namespace std;

int main(){

            int even , odd;
            while(cin>> even >> odd){
                    if(even == 0 && odd == 0){
                        cout << "NO" <<endl;
                        continue;
                    }
                    int e = 0 , o = 0;
                    char t = 'f';
                    int range = (even+odd)+1;
                int arr[range];
                for(int i = 0 ; i < range ; i++){
                    arr[i]=(i+1);
                }
                range -= 1;
                for(int i = 0 ; i <= 1;i++){
                        if(t=='t'){
                            break;
                        }
                    for(int j = i ; j < range + i ; j++){
                        if(arr[j]%2==0){
                            e++;
                        }
                        else{
                            o++;
                        }
                    }
                    if(e==even && o==odd){
                        cout << "YES" <<endl;
                        t = 't';
                        break;
                    }e=0;
                     o=0;
                }
                if(t=='f'){
                    cout << "NO"<<endl;
                }


            }

return 0;
}
