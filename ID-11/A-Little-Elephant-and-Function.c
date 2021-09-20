#include <stdio.h>
int main() {

    int n, i;

    scanf("%d", &n);

    if(n<=2) {
        for(i=n; i>=1; i--) {
        printf("%d ", i);
        }
    }else {
        printf("%d ", n);
        for(i=1; i<=n-1; i++) {
            printf("%d ", i);
        }
    }
    

    return 0;

}