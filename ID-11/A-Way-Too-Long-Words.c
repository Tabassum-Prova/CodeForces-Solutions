#include <stdio.h>
#include <string.h>
int main(){

    int n , t, i, count;
    char arr[101];

    scanf("%d", &t);

    while(t--){
        scanf("%s", &arr);
        n=strlen(arr);
        count=0;

        if(n<=10){
            for(i=0; i<n; i++){
            printf("%c", arr[i]);
            }
            printf("\n");
        }else{
            for(i=0; i<n; i++){
                if(i!=0 && i!=n-1){
                    count++;
                }
            }

            printf("%c%d%c\n", arr[0], count, arr[n-1]);
        }
    }
    
     

    return 0;
}