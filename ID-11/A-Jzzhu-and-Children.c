#include <stdio.h>
#include <math.h>
int main(){

    int n,  i;
    double m;
    scanf("%d %lf", &n, &m);
    int arr[n];

    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] <= m) {
            arr[i] = 0;
        }
    }

    double max=0; int ans=0;

    for(i=0; i<n; i++) {
        if(ceil(arr[i] / m) >= max) {
            max = ceil(arr[i] / m);
            ans = i;
        }
    }

    printf("%d", ans+1);

    return 0;
}