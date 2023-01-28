#include <stdio.h>
#include <limits.h>
int main()
{
    int max = INT_MIN;
    double avg = 0;
    int n[5];
    int i = 0;
    int sum = 0;
    printf("input five numbers\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
        sum += n[i];
        if (n[i] > max)
        {
            max = n[i];
        }
    }

    avg = sum / 5.0;
    printf("max:%d,mean:%.2lf\n", max, avg);
    return 0;
}
