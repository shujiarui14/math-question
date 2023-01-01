#include <stdio.h>
int main()
{
    
    //第一种方法
    int i=1;
    int n;
    printf("which?\n");
    scanf("%d",&n);
    int temp=n;
    while(n!=1)
    {
        n--;
        i=i*n;
    }
    i=i*temp;
    printf("%d\n",i);
    


    // int i;
    // int n;
    // int ret=1;
    // printf("which?\n");
    // scanf("%d",&n);
    // for(i=1;i<=n;i++)//注意i一定不能等于0
    // {
    //     ret=ret*i;
    // }
    // printf("%d\n",ret);
    // return 0;
} 