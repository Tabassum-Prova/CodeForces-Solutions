#include <stdio.h>
int main() {

    int i, j, k;
    int n, m;

    scanf("%d %d", &n, &m);
    char chess[n][m];

    for(i=0; i<n+2; i++) {
        for(j=0; j<m; j++) {
            scanf("%c", &chess[i][j]);
        }
     
    }

    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            if(chess[i][j] == '.') {
                if((i+j)%2 == 0) {
                    printf("B");
                }else {
                    printf("W");
                }
            }else {
                printf("%c", chess[i][j]);
            }
        }
        printf("\n");
    }



    return 0;
}