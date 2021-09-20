#include <stdio.h>
#include <math.h>
int main() {

    int n, m, i, min,max=0,j, temp =0, ans;
    scanf("%d %d", &n, &m);
    int arr[m];

    for(i=0; i<m; i++) {
        scanf("%d", &arr[i]);
    }

    for(i=1; i<=m; i++) {
        for(j=i+1; j<=m; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    min = arr[n-1]-arr[0];

    for(i=n; i<=m; i++) {
        ans = arr[i-1] - arr[i-n];
        ans = abs(ans);
        if(ans<min) {
            min = ans;
        }
    }

    printf("%d", min);

    return 0;
}