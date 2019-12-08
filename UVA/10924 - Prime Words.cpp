#include<bits/stdc++.h>
using namespace std;
bool prime(int a);
int main(){

    string word ;
    int sum;

    while(cin >> word){
        sum =0;
        for(int i = 0; i < word.size();i++ ){
            if(word[i]>=65 && word[i]<=90){
                sum+=word[i]-64 + 26;
            }
            else if(word[i]>=97 && word[i]<=122){
                sum+=word[i]-96;
            }
        }
        if(prime(sum)==true){
            cout<<"It is a prime word." <<endl;
        }else{
        cout<< "It is not a prime word." <<endl;
        }
    }
return 0;
}
bool prime(int a){
    for(int i = 2 ; i <= sqrt(a) ; i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}
