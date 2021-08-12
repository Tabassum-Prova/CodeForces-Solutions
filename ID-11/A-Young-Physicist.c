#include<stdio.h>
#include<math.h>
int main()
{


    int n,i,x,y,z,sx=0,sy=0,sz=0;

    while(scanf("%d",&n)!=EOF)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d%d%d",&x,&y,&z);
            {
              sx=sx+x;
              sy=sy+y;
              sz=sz+z;
            }
        }
        if(sx==0&&sy==0&&sz==0)
            printf("YES\n");
        else
        printf("NO\n");

    }
}