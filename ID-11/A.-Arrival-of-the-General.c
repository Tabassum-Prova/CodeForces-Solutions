#include <stdio.h>
int main(){

    int a, i;
    scanf("%d", &a);
    int arr[a], max=0, min=101, maxin, minin;

    for(i=0; i<a; i++){
        scanf("%d", &arr[i]);
        if(arr[i] > max){
            max = arr[i];
            maxin = i;
        }
        if(arr[i] <= min){
            min = arr[i];
            minin = i;
        }
    }

    if(maxin>minin){
        minin++;
    }
    printf("%d ", maxin+(a-1)-minin);

    return 0;
}