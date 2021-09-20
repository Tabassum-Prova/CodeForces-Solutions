#include <stdio.h>
int main() {
    long long int n, i, j, d, a=1, b=1, temp;
    scanf("%lld", &n);
    long long int arr[n];

    for(i=0; i<n; i++) {
        scanf("%lld", &arr[i]);
    }

    for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    d = arr[n-1] - arr[0];



    if(arr[0] == arr[n-1]) {
        printf("%lld %lldd", d, n*(n-1)/2);
    }else {
        for(i=1; i<n-1; i++) {
            if(arr[i] == arr[0]) {
                a++;
            }else if(arr[i] == arr[n-1]) {
                b++;
            }
        }
        printf("%lld %lld", d, a*b);
    }

   


    return 0;
}