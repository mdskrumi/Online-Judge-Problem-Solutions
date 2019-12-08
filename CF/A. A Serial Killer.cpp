#include <bits/stdc++.h>
using namespace std;
int main(){

    set<string>man;
    set<string>::iterator it;
    string man1 , man2;

    cin >> man1 >> man2;
    cout << man1 << " " << man2 <<endl;

    man.insert(man1);
    man.insert(man2);

    int days;
    cin >> days;

    while(days-->0){
        cin >> man1 >> man2;
        it = man.find(man1);
        man.erase(it);
        man.insert(man2);
        for(it = man.begin(); it !=man.end();it++){
            cout << *it << " ";
        }
        cout << endl;
    }
return 0;
}

