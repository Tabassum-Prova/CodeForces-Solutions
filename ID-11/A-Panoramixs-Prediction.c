#include <stdio.h>
#include <stdlib.h>
int main(){

    int i, n, m, flag = 0;
    int arr[] = {2, 3, 5, 7 , 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    scanf("%d %d", &n, &m);

    for(i=0; i<15; i++){
        if(arr[i]==n){
            if(arr[i+1]==m){
                flag = 1;
            }
        }
    }

    if(flag==1){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}