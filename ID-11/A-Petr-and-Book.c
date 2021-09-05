#include <stdio.h>
int main() {

    int n, i, book = 0, weak=0;
    int arr[8];

    scanf("%d", &n);

    for(i=1; i<8; i++) {
        scanf("%d", &arr[i]);
    }

    while(book <=  n) {
        for(i=1; i<8; i++) {
            book += arr[i];
            if(book >= n) {
                weak = i;
                
                break;
            }
        }

        if(book >= n) {
            break;
        }
    
        
    }
    

    printf("%d", weak);

    

    return 0;
}