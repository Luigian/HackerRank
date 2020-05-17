#include <stdio.h>

void minimumBribes(int q_count, int* q)
{
    int i;
    int j;
    int counter;
    int chaos;

    i = 0;
    counter = 0;
    chaos = 0;
    while (i < q_count)
    {
        if (q[i] - (i + 1) > 2)
        {
            chaos = 1;
            break ;
        }
        j = q[i] >= 2 ? q[i] - 2 : 0;
        while (j < i)
        {
            if (q[j] > q[i])
                ++counter;
            ++j;
        }
        ++i;
    }
    if (chaos)
        printf("Too chaotic\n");
    else
        printf("%d\n", counter);
}

int main(void)
{
    int q_count;
    int q1[] = {2, 1, 5, 3, 4};
    int q2[] = {2, 5, 1, 3, 4};
    
    q_count = 5;
    minimumBribes(q_count, q1);
    minimumBribes(q_count, q2);
    return (0);
}