#include <stdio.h>
int main(){

    int n, k, l, c, d, p, nl, np, min=0, ami, tumi, kala;

    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    ami = k*l/nl;
    tumi = c*d;
    kala = p/np;

    if(ami<tumi){
        min=ami;
    }else{
        min=tumi;
    }
    if(kala<min){
        min=kala;
    }

    printf("%d", min/n);

    return 0;
}