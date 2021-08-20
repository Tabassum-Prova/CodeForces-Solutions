#include <stdio.h>
int main(){

    int n, i, sum=0;
    scanf("%d", &n);
    int arr[n];
    float avg;

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (float)sum / (float)n;
    printf("%f", avg);

    

    return 0;
}