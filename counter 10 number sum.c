#include <stdio.h>
int main()
{
    int i;
    int sum=0;
    int number;
    int counter;
    for(i=0;i<10;i++)
    {
        scanf("%d",&number);
        if(number>0)
        {
            sum=sum+number;
            counter++;
        }
    }
    printf("counter=%d sum=%d\n",counter,sum);
    return 0;
}