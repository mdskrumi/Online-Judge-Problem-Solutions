#include<bits/stdc++.h>
using namespace std;

int main(){

     string s;
     char c;
     int M,A,R,G,T,I;
     vector<int>v;
     int t;
     cin >>t ;
     while(t-->0){
        while(cin >> s){
                M=A=R=G=T=I=0;
                for(int i = 0;i < s.size() ; i++){
                    if(s[i]=='M')M++;
                    else if(s[i]=='A')A++;
                    else if(s[i]=='G')G++;
                    else if(s[i]=='R')R++;
                    else if(s[i]=='T')T++;
                    else if(s[i]=='I')I++;
                }
                A/=3;
                R/=2;
                v.push_back(M);
                v.push_back(A);
                v.push_back(R);
                v.push_back(G);
                v.push_back(I);
                v.push_back(T);
                sort(v.begin(),v.end());

                cout << v.front() << endl;
                v.clear();

        }

     }

return 0;
}
