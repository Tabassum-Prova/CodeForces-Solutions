#include <stdio.h>
#include <math.h>
int main() {

    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);

    int x = min(n-a, b+1);
    printf("%d", x);

    return 0;
}