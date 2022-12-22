#include <stdio.h>
int main()
{
    int x;
    int y;
    int a,b;
    printf("head and feet");
    scanf("%d %d",&a,&b);
    y=(b-2*a)/2;
    // printf("%d",y);
    x=a-y;
    int sum =x+y;
    if(x%1!=0||x<0||y<0)
    printf("no anwer\n");
    else
    printf("chicken=%d rabbit=%d total=%d",x,y,sum);
    return 0;
}
