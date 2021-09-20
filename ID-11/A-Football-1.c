#include <stdio.h>
#include <string.h>

int main() {

    int n, i, count1 = 0, count2 = 0, flag =0;
    char arr[101];

    scanf("%s", &arr);

    n = strlen(arr);

    
    for(i=0; i<n; i++) {
        if(arr[i] == '0') {
            count1++;
            if(count2 != 0) {
                count2 = 0;
            }
            if(count1 >=7) {
                flag = 1;
                break;
            }
        }else if(arr[i] == '1') {
            count2++;
            if(count1 !=0) {
                count1 = 0;
            }
            if(count2 >= 7) {
                flag =1;
                break;
            }
        }

        if(flag == 1) {
            break;
        }
    }

    if(flag == 1) {
        printf("YES");
    }else {
        printf("NO");
    }
 
    return 0;
}