#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {

    char s[101], t[101];
    int i, n, k, j, f=0;

    scanf("%s", &s);
    scanf("%s", &t);

    n = strlen(s);
    k = strlen(t);

    for(i=0, j=k-1; i<n; i++, j--) {
        if(s[i] == t[j]) {
               
            f = 1;
            
        }else {
            f = 0;
            break;
        }
    }

    if(f== 1) {
        printf("YES");
    }else {
        printf("NO");
    }

    return 0;

}