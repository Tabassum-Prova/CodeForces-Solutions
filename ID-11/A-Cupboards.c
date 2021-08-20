#include <stdio.h>
int main(){

    int n, l, r, left=0, right=0, result, i, m;
    scanf("%d", &n);


    for(i=1; i<=n; i++){
        scanf("%d %d", &l, &r);
        left+=l;
        right+=r;
    }

    result = left < n-left ? left : n-left;
    m = right < n - right? right : n-right;

    printf("%d", result+m);


    return 0;
}