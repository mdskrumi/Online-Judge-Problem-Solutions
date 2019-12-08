#include<stdio.h>
#include<string.h>
void kmpPreprocess(char P[], int sz);
int kmpSearch(char T[],char P[], int n, int m);

#define MAX_N 1000100

int b[MAX_N], n, m;

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
            char T[MAX_N], P[MAX_N];
            scanf("%s %s",&P,&T);

            n = (int)strlen(T);

            m = (int)strlen(P);

            kmpPreprocess(P,m);
            int ans = kmpSearch(T,P,n,m);
            printf("%d\n",ans);
    }
return 0;
}
void kmpPreprocess(char P[], int sz) {
    int i = 0, j = -1; b[0] = -1;
    while (i < m) {
        while (j >= 0 && P[i] != P[j]) j = b[j];
        i++; j++;
        b[i] = j;
    }
}

int kmpSearch(char T[],char P[], int n, int m) {
      int i = 0, j = 0 , ans = 0;
      while (i < n) {
            while (j >= 0 && T[i] != P[j]) j = b[j];
            i++; j++;
            if(j==m){
                ans++;
            }
        }
return ans;
}


