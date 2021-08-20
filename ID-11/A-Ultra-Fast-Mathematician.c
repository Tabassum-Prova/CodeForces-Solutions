#include <stdio.h>
#include <string.h>
int main(){

    int n, i;
    char s1[1000000], s2[1000000];
    
    scanf("%s %s", s1, s2);
    n = strlen(s1);

    for(i=0; i<n; i++){
        if(s1[i]==s2[i]){
            printf("0");
        }else{
            printf("1");
        }
    }

    return 0;
}