#include<stdio.h>
#include<string.h>
void kmpPreprocess(char P[], int sz);


#define MAX_N 1000100
int b[MAX_N], n, m;

int main() {
    int t , kase = 1 , tmp;
    scanf("%d",&t);
    while(t--){
            char T[MAX_N], P[MAX_N];
            scanf("%d",&tmp);
            scanf("%s",&T);
            printf("Test case #%d\n",kase++);
            m = (int)strlen(T);
            kmpPreprocess(T,m);
            for(int i = 2 ; i <= m ; i++ ){
                if(i % (i - b[i]) == 0 && i / (i - b[i])!= 1){
                        printf("%d %d\n",i , i/(i-b[i]));
                }
                //printf("I = %d , B[i] = %d", i , b[i]);
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



