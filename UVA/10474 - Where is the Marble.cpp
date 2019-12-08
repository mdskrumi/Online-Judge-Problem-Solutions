#include<bits/stdc++.h>
using namespace std;
int binarysearch(int numbers[] ,int low , int high ,int num);
int r = -1;
int main(){

        int n , q , kase = 1;

        while(cin >> n >> q){
            if(n==0 && q == 0){
                return 0;
            }
            int marbles[n] , s;
            for(int i = 0 ; i < n ; i++){
                cin >> *(marbles+i);
            }
            sort(marbles,marbles+n);

            /*for(int i = 0 ; i < n ; i++){
                cout << *(marbles+i);
            }*/
            cout << "CASE# "<<kase++<<":"<<endl;
            for(int i = 0 ; i < q ; i++){
                cin >> s;
                r = -1;
                int result = binarysearch(marbles,0,n-1,s);
                if(result==-1)cout << s <<" not found" <<endl;
                else cout << s << " found at " << result+1 <<endl;
            }
        }
return 0;
}
int binarysearch(int numbers[] ,int low , int high ,int num){


    if(low>high){
        return r;
    }

    int mid = (low+high)/2;
    if(numbers[mid] == num){
        r = mid;
        high = mid - 1;
        return binarysearch(numbers,low,high,num);
    }
    if(numbers[mid]<num){
        low = mid+1;
        return binarysearch(numbers,low,high,num);
    }
    else{
        high = mid -1;
        return binarysearch(numbers,low,high,num);
    }
}
