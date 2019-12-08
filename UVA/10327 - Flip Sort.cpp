#include<bits/stdc++.h>
using namespace std;
int main(){

            int t ,  ans;
            while((scanf("%d",&t))!=EOF){
                int num[t] ;
                for(int i = 0 ; i < t ; i++){
                    cin >> num[i];
                }ans = 0;

                for(int i = 0 ; i < t ; i++){
                    char a = 't';
                    for(int j = 1 ; j < t ; j++){
                        if(num[j-1]>num[j]){
                            swap(num[j],num[j-1]);
                            ans++;
                            a = 'f';
                        }
                    }if(a=='t'){
                        break;
                    }
                }
                cout << "Minimum exchange operations : " << ans <<endl;
            }

return 0;
}
