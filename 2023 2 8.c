#include <stdio.h>
int main()
{
    int target=0;
    printf("which number?\n");
    scanf("%d",&target);
    int i=0,ret=0;
    int tmp[32];
    for(;target!=0;i++)
    {
        tmp[i]=target%2;
        target/=2;
        ret++;
    }
    for(;ret>0;ret--)
    {
        printf("%d",tmp[ret-1]);
    }
}