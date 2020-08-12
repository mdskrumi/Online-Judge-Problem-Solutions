#include <bits/stdc++.h>
using namespace std;

#define BOLT ios_base::sync_with_stdio(0)
#define newline cout << "\n"
#define eline cerr << "\n"
#define LL_MAX 9223372036854775807
#define LL_MIN -9223372036854775808
#define PI acos(-1)
#define IN_FILE freopen("input.txt", "r", stdin)
#define OUT_FILE freopen("output.txt", "w", stdout)

// g++ -o contest contest.cpp


void USEFILE(){
    IN_FILE;
    OUT_FILE;
}

map<int ,int>mp;
map<int ,int>::iterator it;


bool check(){
  int eight = 0, six = 0 , four = 0 , two = 0;
  for(it = mp.begin() ; it != mp.end(); it++){
    if(it->second >= 8){
      eight++;
      six++;
      four++;
      two++;
    }
    else if(it->second >= 6){
      six++;
      four++;
      two++;
    }
    else if(it->second >= 4){
      four++;
      two++;
    }
    else if(it->second >= 2){
      two++;
    }
  }

  if(eight >= 1 || six >= 2 || four >= 2 || two >= 4){
    // cout << "First Condition: ";
    return true;
  }
  else if(six >= 1 && (two >= 2 || four >= 2 )){
    // cout << "Second Condition: ";
    return true;
  }
  else if(four >= 1 && two >= 3){
    // cout << "Third Condition: ";
    return true;
  }
  return false;


}

void solve(int kase){
  int n;
  int eight = 0, six = 0 , four = 0 , two = 0;
  cin >> n;
  for(int i = 0 ; i < n ; i++){
    int x;
    cin >> x;
    if(mp.find(x) != mp.end()){
      mp[x]++;

      if(mp[x] == 2){
        two++;
      }
      if(mp[x] == 4){
        four++;
      }
      if(mp[x] == 6){
        six++;
      }
      if(mp[x] == 8){
        eight++;
      }

    }
    else{
      mp[x] = 1;
    }
  }

  int q;

  cin >> q;
  while(q--){
    char s;
    int p;
    cin >> s >> p;

    if(s == '-'){

      if(mp[p] == 2){
        two--;
      }
      if(mp[p] == 4){
        four--;
      }
      if(mp[p] == 6){
        six--;
      }
      if(mp[p] == 8){
        eight--;
      }

      mp[p]--;
      if(mp[p] == 0){
        mp.erase(p);
      }
    }else{
      if(mp.find(p) != mp.end()){
          mp[p]++;

      if(mp[p] == 2){
        two++;
      }
      if(mp[p] == 4){
        four++;
      }
      if(mp[p] == 6){
        six++;
      }
      if(mp[p] == 8){
        eight++;
      }

      }
      else{
          mp[p] = 1;
      }
    }



  if(eight >= 1 || six >= 2 || four >= 2 || two >= 4){
    // cout << "First Condition: ";
    cout << "YES";
  }
  else if(six >= 1 && (two >= 2 || four >= 2 )){
    // cout << "Second Condition: ";
    cout << "YES";
  }
  else if(four >= 1 && two >= 3){
    // cout << "Third Condition: ";
    cout << "YES";
  }else 
    cout << "NO"; 
    
  newline;

  }


}

int main(){
    BOLT;
    // USEFILE();
    // int t, kase = 0;
    // cin >> t;
    // while(t--)
    //      solve(++kase);
    solve(0);

return 0;
}
