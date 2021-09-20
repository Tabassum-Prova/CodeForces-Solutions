#include <stdio.h>
#include <string.h>

int main() {

    char s[201];
    int n, i;

    scanf("%s", &s);

    n = strlen(s);

    for(i=0; i<n; i++) {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            printf(" ");
            i += 2;
        }else {
            printf("%c", s[i]);
        }
    }

    return 0;

}