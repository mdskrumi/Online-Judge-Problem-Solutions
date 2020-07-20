#include <bits/stdc++.h>
using namespace std;

#define BOLT ios_base::sync_with_stdio(0)
#define newline cout << "\n"
#define eline cerr << "\n"
#define LL_MAX 9223372036854775807
#define LL_MIN -9223372036854775808
#define IN_FILE freopen("input.txt", "r", stdin)
#define OUT_FILE freopen("output.txt", "w", stdout)

// g++ -o contest contest.cpp


void USEFILE(){
    IN_FILE;
    OUT_FILE;
}

int n;
vector<int>v;

bool isPosible(int s){
    int i = s , j = n-1;
    int curr = -1;
    while(i<=j){
        if(v[i] < curr || v[j] < curr){
            return false;
        }
        if(v[i] < v[j]){
            curr = v[i];
            i++;
        }
        else{
           curr = v[j];
           j--;
        }
       
    }
    //cout << "FOR " << s << " TRUE";newline;
    return true;
}

void solve(int kase){
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        v.push_back(x); 
    }
    int l = 0, h = n-1, ans = -1;
    while(l<=h){
        int mid = l + (h-l)/2;
        if(isPosible(mid)){
            h = mid-1;
            ans = mid;
        }
        else l = mid+1;
    }

    cout << ans; newline;
    v.clear();

}


int main(){
    BOLT;
    // USEFILE();
    int t, kase = 0;
    cin >> t;
    while(t--)
         solve(++kase);
    // solve(0);

return 0;
}
