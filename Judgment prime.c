#include <stdio.h>
int prime(int n)
{
    int i;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            if(i==n)
            return 1;
            else
            return 0;
        }
    }
}

int main()
{

    int x=111;
    if(prime(x)==1)
    printf("yes\n");
    else
    printf("no\n");
    return 0;
}