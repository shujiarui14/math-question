#include <stdio.h>
int main ()
{
    int n;
    printf("please certain which item\n");
    scanf("%d",&n);
    int x;
    int y;
    int t;
    for(x=2;x<=n;x++)
    {
        for(y=2;y<=n;y++)
        {
            t=x%y;
            if(t==0)
            break;
        }
        if(x==y)
        printf("%d\n",y);

    }
    return 0;
}