#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> age;
    int n ,a;
    while(scanf("%d",&n)&&n>0){
    while(n-->0){
        scanf("%d",&a);
        age.push_back(a);
    }
    sort(age.begin(),age.end());

    for(int i = 0 ; i < age.size();i++){
            if(i== age.size()-1){
                printf("%d",age[i]);
                break;
            }
        printf("%d ",age[i]);
    }
    printf("\n");
    age.clear();
    }
return 0;
}
