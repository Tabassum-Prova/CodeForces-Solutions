#include <stdio.h>
int main(){
    int n, i, j, amz=1, min, max;
    scanf("%d", &n);
    int arr[n];

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    if(n==1){
        amz=0;
    }

    if(arr[0]>arr[1]){
        max=arr[0];
        min=arr[1];
    }else if(arr[0]<arr[1]){
        max=arr[1];
        min=arr[0];
    }else if(arr[0]==arr[1]){
        max=arr[1];
        min=arr[0];
        amz=0;
    }

    // printf("%d %d",max,min);
    for(i=2; i<n; i++){
        if(arr[i]>max){
            
            
            amz++;
            max=arr[i];
        }else if(arr[i]<min){
            
          
            amz++;
            min=arr[i];
        }
    }

    printf("%d", amz);

    return 0;
}