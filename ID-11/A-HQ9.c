#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){

    int i, j, flag=0, n;
    char arr[101] = {'H', 'Q', '9'};
    char arr2[101];

    scanf("%s", arr2);
    n=strlen(arr2);

    for(i=0; i<3; i++) {
        for(j=0; j<n; j++){
            if(arr[i]==arr2[j]) {
             
                flag = 1;
                break;
            }
        }
    }

    if(flag==0) {
        printf("NO");
    }else if(flag==1){
        printf("YES");
    }
    

    return 0;
}