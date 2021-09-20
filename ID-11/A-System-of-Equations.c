#include <stdio.h>
int main() {
    
    int n, m, i, j, count =0;

    scanf("%d %d", &n, &m);


    for(i=0; i<=1000; i++) {
        for(j=0; j<=1000; j++) {
            if(i*i + j == n  && i + j*j == m) {
                count++;
            }
        }
    }

    printf("%d", count);

    return 0;
    
}