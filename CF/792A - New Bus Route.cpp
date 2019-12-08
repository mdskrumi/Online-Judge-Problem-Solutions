#include<bits/stdc++.h>
using namespace std;
int main(){

    int n , a;
    vector<int>v1,v2;

    scanf("%d",&n);

    while(n-->0){
        scanf("%d",&a);
        v1.push_back(a);
    }
    sort(v1.begin(),v1.end());

    for(int i = 1 ; i < v1.size();i++){
        int temp = abs(v1[i]-v1[i-1]);
        v2.push_back(temp);
    }
    sort(v2.begin(),v2.end());
    int ans = 1;
    for(int i = 1 ; i < v2.size() ; i++){
        if(v2[i]==v2[0]){
            ans++;
        }
    }
    printf("%d %d\n",v2[0],ans);

return 0;
}
