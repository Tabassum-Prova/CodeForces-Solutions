#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){

    int arr[6][6];
    int i, j, r, c;

    for(i=1; i<6; i++){
        for(j=1; j<6; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=1; i<6; i++){
        for(j=1; j<6; j++){
            if(arr[i][j]==1){
                r=abs(3-i);
                c=abs(3-j);
                printf("%d", c+r);
            }
        }
    }

    return 0;
}