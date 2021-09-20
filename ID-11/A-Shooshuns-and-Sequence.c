#include <stdio.h>
int main() {

    int n, a, k, last=0, cnt =1, i;
    scanf("%d %d", &n, &k);

    for(i=0; i<n; i++) {
        scanf("%d", &a);
        if(a == last) {
            cnt++;
        }else {
            cnt = 1;
        }
        last = a;
    }

    printf("%d", cnt + k > n ? n - cnt: -1);

    return 0;
}