#include <bits/stdc++.h>
using namespace std;
int main(){

    int n ,ans = 0;
    string t;
    cin >> n;

    for(int i = 0 ; i < n ; i++){

        cin >> t;

        if(t== "Tetrahedron"){
            ans+=4;
        }
        else if(t== "Cube"){
            ans+=6;
        }
        else if(t== "Octahedron"){
            ans+=8;
        }
        else if(t== "Dodecahedron"){
            ans+=12;
        }
        else if(t== "Icosahedron"){
            ans+=20;
        }
    }
    cout << ans <<endl;

return 0;
}


