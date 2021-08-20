#include <stdio.h>
int main(){

    int n, i, j, sum=0, a, b, max=0;
    scanf("%d", &n);

    while(n--){
        scanf("%d %d", &a, &b);
        sum-=a;
        sum+=b;
        if(sum>max){
            max=sum;
        }
    }

    printf("%d", max);

    return 0;
}