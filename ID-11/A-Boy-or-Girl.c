#include <stdio.h>
#include <string.h>
int main(){

    int n, i, j, count=0, swap;
    char arr[1001];

    scanf("%s", &arr);
    n = strlen(arr);

    for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
            if(arr[i]>arr[j]){
                swap = arr[j];
                arr[j] = arr[i];
                arr[i] = swap;
            }
        }
    }
    count = n;
    for(i=0; i<n; i++) {
        if(arr[i]==arr[i+1] ){
            count--;
        }
    }

    if(count%2==0) {
        printf("CHAT WITH HER!");
    }else {
        printf("IGNORE HIM!");
    }

    return 0;
}