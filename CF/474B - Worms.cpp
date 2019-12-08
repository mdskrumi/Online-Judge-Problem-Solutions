#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
#define pb push_back
using namespace std;
int BS(int low , int high , int q , int worms[]);
int main(){
    int n;
    scanf("%d",&n);
    int worms[n] , j = 0;
    for(int i = 0 ; i < n ; i++){
        sf("%d",&worms[i]);
        worms[i] += j;
        j = worms[i];
    }
  /*  for(int i = 0 ; i < n ; i++){
        cout << worms[i] <<" ";
    }puts("");*/
    int t , q;
    sf("%d",&t);
    for(int i = 0 ; i < t ; i++){
        sf("%d",&q);
        pf("%d\n",BS(0,n,q,worms));
    }
return 0;
}
int BS(int low , int high , int q , int worms[]){

    while(low<=high){
        int mid = (low+high)/2;
        //cout << "***" <<worms[mid] <<endl;
        if(worms[mid]==q){
            return mid+1;
        }
        else if(worms[mid] < q){
            low = mid+1;
        }
        else if(worms[mid] > q){
            high = mid - 1;
        }
    }
        if(q < worms[low]){
            return low+1;
        }
        if(q > worms[high]){
            return high-1;
        }
}

