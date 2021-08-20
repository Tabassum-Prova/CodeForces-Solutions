#include <stdio.h>
int main(){

    int n, i;
    scanf("%d", &n);

    if(n%2==1){
        printf("-1");
    }else{

        for(i=1; i<=n; i++){
            if(i%2==0){
                printf("%d ", i-1);
            }else{
                printf("%d ", i+1);
            }
        }

        
    }
    

    return 0;
}