#include <stdio.h>
#include <math.h>
int main() {

    int edge1, edge2, edge3;
    int rest1, rest2, rest3;
    scanf("%d %d %d", &edge1, &edge2, &edge3);

    rest1 = sqrt((edge1 * edge2) / edge3);
    rest2 = sqrt((edge1 * edge3) / edge2);
    rest3 = sqrt((edge2 * edge3) / edge1);

    int sum = (rest1 + rest2 + rest3) * 4;

    printf("%d", sum);


    return 0;
}