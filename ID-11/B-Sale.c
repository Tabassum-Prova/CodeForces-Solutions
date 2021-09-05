#include <stdio.h>
#include <math.h>

int main() {

    long int n, m, i, sum = 0, flag=0;
    scanf("%d %d", &n, &m);
    long int arr[2001];

    for(i=0; i<n; i++) {

        scanf("%ld", &arr[i]);
        if(arr[i] < 0) {
            sum += abs(arr[i]);
            flag++;
            
        }
        if(flag == m) {
                break;
        }
    }

    printf("%ld", sum);

    return 0;
}