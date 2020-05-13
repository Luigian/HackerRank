#include <stdio.h>
#include <stdlib.h>

int* rotLeft(int a_count, int* a, int d, int* result_count) {
    int *result;
    int i;
    int j;

    result = malloc(sizeof(int) * a_count);
    i = 0;
    j = d;
    result[i] = a[j]; 
    ++i;
    ++j;
    while (j < a_count)
    {
        result[i] = a[j]; 
        ++i;
        ++j;
    }
    j = 0;
    while (i < a_count)
    {
        result[i] = a[j]; 
        ++i;
        ++j;
    }
    *result_count = a_count;
    return (result);
}

int main(void)
{
    int a_count;
    int d;
    int *a;
    int *result_count;
    int *result;
    int i;
    
    a_count = 5;
    d = 4;
    a = malloc(sizeof(int) * a_count);
    result_count = malloc(sizeof(int));
    for (i = 0; i < a_count; ++i)
        a[i] = i + 1;
    result = rotLeft(a_count, a, d, result_count);
    for (i = 0; i < a_count; ++i)
        printf("%d%c", result[i], i < (a_count - 1) ? ' ' : '\n');
    return (0);    
}