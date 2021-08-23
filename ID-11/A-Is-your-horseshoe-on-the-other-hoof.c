#include <stdio.h>
int main(){

    int i, j, match=0, swap=0;
    int arr[5];

    for(i=1; i<5; i++){
        scanf("%d", &arr[i]);
    }

    
    for(i=1; i<5; i++){
        for(j=i+1; j<5; j++){
            if(arr[i]>arr[j]){
                swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
        
    }

    for(i=1; i<4; i++){
        if(arr[i]==arr[i+1]){
            match++;
        }     
    }

    printf("%d", match);

    return 0;
}