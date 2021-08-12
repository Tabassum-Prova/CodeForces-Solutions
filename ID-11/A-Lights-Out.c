#include <stdio.h>

int arr[3][3];

void modify(int i, int j, int x){
    arr[i][j] +=x;

    if(j+1 < 3){
        arr[i][j+1] += x;

    }

    if(j-1 > -1){
        arr[i][j-1] += x;
    }

    if(i+1 < 3){
        arr[i+1][j] += x;
    }

    if(i-1 > -1){
        arr[i-1][j] += x;
    }
}
int main(){

    int i, j, k;
    

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            int x;
            scanf("%d", &x);
            modify(i, j, x);
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(arr[i][j] % 2 == 0){
                printf("1");
            }else{
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}