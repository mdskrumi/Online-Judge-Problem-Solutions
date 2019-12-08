#include<bits/stdc++.h>
using namespace std;
int main(){

      string a , b;
      cin >> a >> b;
      reverse(b.begin(),b.end());
      if(a==b){
        cout << "YES\n";
      }
      else{
        cout << "NO\n";
      }
return 0;
}
