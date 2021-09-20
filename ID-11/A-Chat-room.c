#include <stdio.h>
#include <string.h>

int main() {

    int n, i, flag = 0, j=0;
    char hello[5] = {'h', 'e', 'l', 'l', 'o'};
    char s[101];

    scanf("%s", &s);

    n = strlen(s);

    for(i=0; i<n; i++) {
        if(s[i] == hello[j]) {
            j++;
            flag++;
        }
    }

    if(flag == 5) {
        printf("YES");
    }else {
        printf("NO");
    }

    return 0;
}