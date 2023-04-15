#include<stdio.h>
int main()
{
    int n,i,a,b,x,y;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d%d%d%d",&a,&b,&x,&y);
        if(a>b)
        {
            if((a-b)<=y) {printf("YES\n");}
            else {printf("NO\n");}
        }
        else if (a<b)
            {
            if((b-a)<=x) {printf("YES\n");}
            else {printf("NO\n");}
        }
        else if (a==b)
        {
           printf("YES\n");
        }
    }
    return 0;
}
