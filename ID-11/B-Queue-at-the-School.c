#include <stdio.h>
#include <string.h>

int main(){

    int n, t, i, temp=0;
    scanf("%d %d", &n, &t);
    char arr[n];

    scanf("%s", &arr);

    while(t--){
        for(i=0; i<n; i++){
            if(arr[i]=='B' && arr[i+1]=='G'){
                
                temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
                i++;          

            }
            
        }
    }

    for(i=0; i<n; i++){
        printf("%c", arr[i]);
    }

    
    return 0;
}