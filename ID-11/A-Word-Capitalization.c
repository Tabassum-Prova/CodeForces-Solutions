#include <stdio.h>
#include <string.h>
int main(){

    char word[1001];
    int i, n;
    scanf("%s", &word);

    n = strlen(word);

    for(i=0; i<n; i++){
        if(word[0] >=97 && word[0] <= 122){
            word[0] -= 32;
        }

        printf("%c", word[i]);
    }

    
    return 0;
}