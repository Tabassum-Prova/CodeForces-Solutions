#include <stdio.h>
#include <string.h>

int main() {

    char team1[15], team2[15], input[15];
    int i, n, a=0, b=0;
    int check = 0, check1 = 0;

    scanf("%d", &n);
    getchar();

    for(i=0; i<n; i++){
        gets(input);
        if(check){ strcpy(team1,input); check = 1; }
		if(strcmp(team1,input)==0) a++;
		else{
			if(check1) { strcpy(team2,input); check1 = 1; }
			b++;
		}

    }

    if(a>b) puts(team1);
	else puts(team2);


    return 0;
}