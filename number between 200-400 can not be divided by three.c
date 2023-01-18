#include <stdio.h>

int main()
{
    int sum = 0;
    int i = 0;

    for (i = 200; i < 400; i++)
    {
        if (0 != i % 3)
        {
            sum += i;
            
        }
    }
    printf("[200,400) can not be divided by three is%d\n", sum);
    return 0;
}

