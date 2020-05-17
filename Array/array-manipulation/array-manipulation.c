#include <stdio.h>
#include <stdlib.h>

long arrayManipulation(int n, int queries_rows, int queries_columns, int** queries)
{
    long *array;
    int i;
    int x;
    int a;
    int b;
    int k;
    long sum;
    long max;

    array = malloc(sizeof(long) * n + 1);
    i = 0;
    while (i < (n + 1))
    {
        array[i] = 0;
        i++;
    }
    x = 0;
    (void)queries_columns;
    while (x < queries_rows)
    {
        a = queries[x][0];
        b = queries[x][1];
        k = queries[x][2];
        array[a] += k;
        if (b != n)
            array[b + 1] += -k;
        ++x;
    }
    i = 1;
    sum = 0;
    max = 0;    
    while (i < (n + 1))
    {
        sum = array[i] += sum;
        if (sum > max)
            max = sum;
        ++i;
    }
    return (max);
}

int main(void)
{
    int n;
    int queries_rows;
    int queries_columns;
    int **queries;
    int q0[] = {1, 2, 100};
    int q1[] = {2, 5, 100};
    int q2[] = {3, 4, 100};
    
    n = 5;
    queries_rows = 3;
    queries_columns = 3;
    queries = malloc(sizeof(int *) * queries_rows);
    queries[0] = q0;
    queries[1] = q1;
    queries[2] = q2;
    printf("%ld\n", arrayManipulation(n, queries_rows, queries_columns, queries));
    return (0);
}