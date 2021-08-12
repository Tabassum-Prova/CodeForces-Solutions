#include <stdio.h>
int main(){

    int i, count=0;
    long long int arr;


    scanf("%lld", &arr);

    while(arr!=0){
        if(arr%10==4 || arr%10==7){
            count++;
        }

        arr/=10;
    }

    if(count==7 || count==4){
        printf("YES");
    }else{
        printf("NO");
    }
    

    return 0;
}