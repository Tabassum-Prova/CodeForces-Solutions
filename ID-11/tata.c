#include <stdio.h>
#include <stdlib.h>
int main(){

    int i, n, m, flag=0, flag1=0;
    scanf("%d %d", &n, &m);
    
    int count =0;

    if(m==2 || m == 3){
        flag =0;
    }else{
        for(i=1; i<=m; i++){
            if(m%i==0){
                count++;
            }
        }

        if(count > 2){
            flag = 1;
        }
    }
    

    
    int pala;

    if(n==2 || n==3){
        flag=0;
    }else {
        for(i=1; i<=n; i++){
                if(n%i==0){
                pala++;
            }
        }

        if(pala > 2){
            flag1 = 1;
        }
    }
    

    if(flag == 0 && flag1 == 0){
        printf("YES");
    }else if(flag == 1 || flag1 == 1){
        printf("NO");
    }

    return 0;
}