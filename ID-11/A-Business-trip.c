#include <stdio.h>

int main() {

    int k, i, j, sum = 0, temp=0, count=0;
    int arr[13];

    scanf("%d", &k);

    for(i=1; i<=12; i++) {
        scanf("%d", &arr[i]);
    }

    for(i=1; i<=12; i++) {
        for(j=i+1; j<=12; j++) {
            if(arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(i=1; i<=12; i++) {
        sum += arr[i];
        count++;
        if(sum >= k) {
            break;
        }
    }
    
    if(k==0) {
        printf("0");
    }
    else if(sum >= k) {
        printf("%d", count);
    }else {
        printf("-1");
    }

    return 0;

}