#include <stdio.h>

int main() {

    int s, n, x, y, flag = 0, i, temp=0, min , max;
    scanf("%d %d", &s, &n);

    for(i=1; i<=n; i++) {

        scanf("%d %d", &x, &y);

        if(x>y) {
            max =x;
            min =y;
        }else {
            min =x;
            max=y;
        }

        if(s > min) {
            flag =1;
            s += max;
        }else {
            flag = 0;
            break;
        }

    }

    if(flag == 0) {
        printf("NO");
    }else {
        printf("YES");
    }

    return 0;
}