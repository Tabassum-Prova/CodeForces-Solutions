#include <stdio.h>
int main(){
    
    int n, i, count=0;
    scanf("%d", &n);
    char arr[n];

    scanf("%s", arr);

    for(i=0; i<n-1; i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
    }

    printf("%d", count);

    return 0;
}