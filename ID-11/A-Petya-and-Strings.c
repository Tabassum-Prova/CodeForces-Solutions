#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {

    int i, count1, count2, n, flag=0;
    char arr[101], arr2[101];

    scanf("%s\n%s", arr, arr2);
    n=strlen(arr);

    for(i=0; i<n; i++){
        arr[i] = tolower(arr[i]);
        arr2[i] = tolower(arr2[i]);
    }

    for(i=0; i<n; i++) {
        if(arr[i]<arr2[i]) {
            printf("-1");
            flag=1;
            break;
        }
        if(arr[i]>arr2[i]) {
            printf("1");
            flag=1;
            break;
        }
    }

    if(flag==0) {
        printf("0");
    }

    

    return 0;
}