#include <stdio.h>
#include <string.h>

int main(){

    int i, countc=0, counts=0, n;
    char arr[101];

    scanf("%s", &arr);
    n = strlen(arr);

    for(i=0; i<n; i++){
        if(arr[i] >= 65 && arr[i] <= 90){
            countc++;
        }else if(arr[i]>=97 && arr[i]<=122){
            counts++;
        }
    }

    if(countc < counts){
        for(i=0; i<n; i++){
            if(arr[i]>=65 && arr[i]<=90){
                arr[i]+=32;
            }
            printf("%c", arr[i]);
        }
    }
    else if(countc > counts){
        for(i=0; i<n; i++){
            if(arr[i]>=97 && arr[i]<=122){
                arr[i] -= 32;
            }
            printf("%c", arr[i]);
        }
    }
    else if(countc == counts){
        for(i=0; i<n; i++){
            if(arr[i]>=65 && arr[i]<=90){
                arr[i] += 32;
            }
            printf("%c", arr[i]);
        }
    }else{
        for(i=0; i<n; i++){
            printf("%c", arr[i]);
        }
    }


    return 0;
}