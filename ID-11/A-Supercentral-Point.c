#include <stdio.h>
int main (){

    int n, z=0, i, k=0;
    int r, l u, d;
    r = l = u = d = 0;

    scanf("%d", &n);
    int arr[n][2];

    for(i=0; i<n; i++, k++) {
        if(k==2) {
            k=0;
        }
         scanf("%d", arr[i][k]);     
    }

    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            if(i==j) {
                continue;
            }
            if (arr[j][0] > arr[i][0] && arr[i][1] == arr[j][1])
                r = 1;
             if (arr[j][0] < arr[i][0] && arr[i][1] == arr[j][1])
                l = 1;
            if (arr[j][0] == arr[i][0] && arr[i][1] < arr[j][1])
                u = 1;

            if (arr[j][0] == arr[i][0] && arr[i][1] > arr[j][1])
                d = 1;

             if (r == 1 && d==1 && l==1 && u==1)
                ++z;

            r = l = u = d = 0;


        }
    }

    printf("%d", z);

    return 0;
}