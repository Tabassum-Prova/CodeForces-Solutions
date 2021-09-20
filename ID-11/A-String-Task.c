#include <stdio.h>
#include <string.h>

int main() {

    int n, i, j;
    char s[101], a[200];
    scanf("%s", s);
    n = strlen(s);

    for(i=0, j=0; i<n; i++) {
        if(s[i]!='A' && s[i]!='a' && s[i]!='E' && s[i]!='e' && s[i]!='I' && s[i]!='i' && s[i]!='o' && s[i]!='O' && s[i]!='U' && s[i]!='u' && s[i]!='Y' && s[i]!='y'){
            a[j]='.';
            j++;
            if(s[i]>=65 && s[i]<=90) {
                a[j] = s[i] +32;
                j++;
            }else {
                a[j] = s[i];
                j++;
            }
        }
    }
    a[j] = '\0';
    puts(a);

    return 0;

}