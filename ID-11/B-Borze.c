#include <stdio.h>
#include <string.h>

int main(){

    int n, i, count;
    char arr[201];
    scanf("%s", &arr);
    n = strlen(arr);

    for(i=0; i<n; i++){
        if(arr[i]=='-' &&arr[i+1]=='.'){
            printf("%d", 1);
            i++;
        }else if(arr[i]=='.'){
            printf("%d", 0);
        }else if(arr[i]=='-' && arr[i+1]=='-'){
            printf("%d", 2);
            i++;
        }
    }

    return 0;
}