#include<bits/stdc++.h>
using namespace std;

int main(){
   //  freopen("input.txt", "r" , stdin);
   //  freopen("output.txt", "w" , stdout);

    int k , sum;
    vector<char>s;
    while(scanf("%d",&k)!=EOF){
        char x;
        scanf("%c",&x);
        while(scanf("%c",&x)!=EOF){
            s.push_back(x);
        }
        s.erase(s.begin()+s.size()-1);
        sum = 0;
        for(int i = 0 ; i < s.size() ; i++){
            sum += s[i] - '0';
            if(sum >= k){
                printf("0\n");
                return 0;
            }
        }
       // cout << " SUM : " <<sum <<endl;
        sort(s.begin(),s.end());
        for(int i = 0 ; i < s.size();i++){
           sum-=(s[i]-'0');
           sum+=9;
           if(sum>=k){
              //  cout << " SUM : " <<sum <<endl;
            printf("%d\n",i+1);
            break;
           }
        }
        s.clear();
    }


return 0;
}
