#include<bits/stdc++.h>
using namespace std;

int toint(string x);
int knapsack(int X , int Y);

vector<int>suitkase;
int wt[5000];

int main(){
   int t , sum , kase;
   cin>>t;
   cin.ignore();
   while(t-->0){
        string line , word = "";
        getline(cin,line);
        sum = 0;

        for(int i = 0 ; i < line.size() ; i++){
            if(line[i] == ' '){
                suitkase.push_back(toint(word));
                sum += toint(word);
                word="";
            }
            else{
                word+=line[i];
            }
        }suitkase.push_back(toint(word));
        sum += toint(word);


        sort(suitkase.begin(),suitkase.end());
       /* for(int i = 0 ; i < suitkase.size() ; i++){
            cout << suitkase[i] <<" " ;
        }
        cout << "SUM : " << sum <<endl;*/
        int x = knapsack(suitkase.size(), sum/2);
        if(sum-(2*x)==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        suitkase.clear();

   }
return 0;
}
int knapsack(int X , int Y){

    for(int i = 0 ; i <= Y ; i++){
        wt[i] = 0;
    }

    for(int i = 0 ; i < X ; i++){
        for(int j = Y ; j > 0 ; j--){
            if(suitkase[i]<= j){
                wt[j] = max(suitkase[i]+wt[j - suitkase[i]], wt[j]);
            }
           // cout << "Coin : " << suitkase[i] << " TOOK : " << wt[j] << " From : " << j <<endl;
        }
    }

return wt[Y];

}
int toint(string x){
    int ans;
    ans = atoi(x.c_str());
   // cout << "String : " << x << " Int : " <<ans <<endl;
    return ans;
}
