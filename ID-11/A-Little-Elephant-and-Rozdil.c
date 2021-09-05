#include <stdio.h>
int main() {

    int n, i, count=0;
    scanf("%d", &n);
    int arr[n];

    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0], k;

    for(i=0; i<n; i++) {
        if(arr[i] < min) {
            min = arr[i];
            k = i;
        }
    }

    for(i=0; i<n; i++) {
        if(arr[i] == min) {
            count++;
        }
    }

    if(count >= 2) {
        printf("Still Rozdil");
    }else {
        printf("%d", k+1);
    }

    return 0;
}