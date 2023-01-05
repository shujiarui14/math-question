#include <stdio.h>
int main()
{
    int i;
    int sum=0;
    int temp;
    int n;
    printf("input a number\n");
    scanf("%d",&n);
    temp=n;
   for(i=0;i<temp;i++)
   {
    sum=n+sum;
    n--;
   }
   printf("%d\n",sum);
}