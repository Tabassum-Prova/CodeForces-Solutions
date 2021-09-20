#include <stdio.h>
#include <string.h>

int main() {

    int i, n, j, count_odd=0;
    char s[1001];
    int amt[30];

    scanf("%s", &s);

    n = strlen(s);

    for(i=0; i<n; i++) {
        amt[s[i]-'a']++;
    }

    for (int i=0;i<26;i++)
    {
        if (amt[i] % 2 == 1) count_odd++;
    }

    if (count_odd == 0)
    {
        printf("First\n");
        return 0;
    }

     if (count_odd == 1)
    {
        printf("First\n");
        return 0;
    }

     if (count_odd % 2 == 0)
    {
        printf("Second\n");
        return 0;
    }

    printf("First\n");

    return 0;
}