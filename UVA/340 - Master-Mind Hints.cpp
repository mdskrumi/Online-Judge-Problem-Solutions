#include <bits/stdc++.h>
using namespace std;

void check(vector<int> x ,vector<int> y);
int strong =0 , weak = 0;

int main(){

    vector<int>c;
    vector<int>g;
    int n , game = 1;

    while(cin >> n && n!=0){
            cout << "Game " <<game++ <<":" <<endl;
        int a;
        c.clear();
        g.clear();
        for(int i = 0 ; i < n ; i++){
            cin >> a;
            c.push_back(a);
        }

    while(1){
        for(int i = 0 ; i < n ; i++){
            cin >> a;
            g.push_back(a);
        }
            if(g[0]==0){
                break;
            }
            check(c,g);
            cout << "    " << "(" << strong << "," << weak<< ")" <<endl;
                strong = 0;
                weak = 0;
                g.clear();
        }
    }
return 0;
}
void check(vector<int> x ,vector<int> y){
    for(int i = 0 ; i < x.size(); i++){
        if(x[i]==y[i]){
            strong++;
            x[i]=-1;
            y[i]=-1;
        }
    }
    for(int i = 0 ; i < x.size() ; i++){
        sort(y.begin(),y.end());
        if(x[i]!= -1){
                int sh = x[i];
                int first = 0;
                int last = y.size() - 1;
                int middle = (first+last)/2;

                    while (first <= last) {
                        if (y[middle] < sh){
                            first = middle + 1;
                        }
                        else if (y[middle] == sh){
                            x[i]=-1;
                            y[middle]=-1;
                            weak++;
                        break;
                        }
                        else
                            last = middle - 1;
                            middle = (first + last)/2;
                        }

                }
        }
}


