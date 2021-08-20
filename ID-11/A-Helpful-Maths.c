#include <stdio.h>
#include <string.h>
int main(){

    int i, j, n, k=0;
    char s[101];
    char arr[4] = {'1', '2', '3'};
    scanf("%s", &s);

    n = strlen(s);

    if(n==1){
        printf("%s", s);
    }else{
        for(i=0; i<3; i++){
            for(j=0; j<n; j++){
                if(arr[i]==s[j]){
                    printf("%c",arr[i]);
                    k++;
                    if(k<n-1){
                        printf("+");
                    }
                    k++;
                }
            }
        
        }
    }

    
    


    return 0;
}