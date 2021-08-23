#include <stdio.h>
int main(){

    int n, i, contest=0;
    int arr[3];

    scanf("%d", &n);

    while(n--) {
        
        int count=0;

        for(i=0; i<3; i++) {
            scanf("%d", &arr[i]);
            if(arr[i]==1) {
                count++;
            }
        }

        if(count>=2) {
            contest++;

        }
    }

        printf("%d", contest);

    return 0;
}