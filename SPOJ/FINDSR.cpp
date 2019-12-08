#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
void kmpPreprocess(char P[], int sz);


#define MAX_N 1000100
int b[MAX_N], n, m;

int main() {
    while(1){
            char T[MAX_N], P[MAX_N];
            scanf("%s",&T);
            if(strlen(T)==1 && T[0]=='*')break;
            n = (int)strlen(T);
                strcpy(P,T);
                m = (int)strlen(P);
                kmpPreprocess(P,m);
                int alpa = m - b[m];
                int ans = m/alpa;

                if(ans*alpa!=m)printf("%d\n",1);
                else{
                    printf("%d\n",ans);
                }


    }
return 0;
}
void kmpPreprocess(char P[], int sz) {
    int i = 0, j = -1; b[0] = -1;
    int ans = 0;
    while (i < m) {
        while (j >= 0 && P[i] != P[j]) j = b[j];
        i++; j++;
        b[i] = j;
    }
}




