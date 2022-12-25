#include <stdio.h>
int main()
{
    int a1,d,an,n;
    int sum=0;
    printf("input a1 d and n");
    scanf("%d%d%d",&a1,&d,&n);
    int i=0;
    int t;
    int r;

    an=a1;
    printf("an=");
    printf("%d\n",a1);
    sum=a1;
    printf("sum=");
    printf("%d\n",sum);
     printf("No.1\n");

    while(i<=n-2)
    {
        an=an+d;
        printf("an=");
        printf("%d\n",an);
        t=an;
        sum=sum+t;
        printf("sum=");
        printf("%d\n",sum);
        i=i+1;
        r=i+1;
        printf("No.");
        printf("%d\n",r); 
    }
return 0;
}