#include <stdio.h>
int main() {

    int n, X=0, i;
    scanf("%d", &n);
    char arr[5];

    while(n--){
        scanf("%s", &arr);

        for(i=0; i<4; i++) {
            if(arr[1]=='+') {
                X++;
                break;
            }else {
                X--;
                break;
            }
        }
    }

    printf("%d", X);

    return 0;
}