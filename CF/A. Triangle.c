#include<stdio.h>
int main(){

        int a , b , c , d;

        while((scanf("%d %d %d %d",&a,&b,&c,&d))!=EOF){
            int arr[4]={a,b,c,d};

            for(int i = 0 ; i < 4 ; i++){
                for(int j = 1 ; j < 4 ; j++){
                    if(arr[j]<arr[j-1]){
                        int temp = arr[j];
                        arr[j]=arr[j-1];
                        arr[j-1]=temp;
                    }
                }
            }
            if(((arr[0]+arr[1])>arr[2]) || ((arr[1]+arr[2])>arr[3])){
                printf("TRIANGLE\n");
            }
            else if(((arr[0]+arr[1])==arr[2])||((arr[1]+arr[2])==arr[3])){
                printf("SEGMENT\n");
            }
            else{
                printf("IMPOSSIBLE\n");
            }
        }

return 0;
}
