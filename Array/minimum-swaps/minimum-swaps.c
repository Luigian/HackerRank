#include <stdio.h>
#include <stdlib.h>

int minimumSwaps(int arr_count, int* arr) {
    int *visit;
    int i;
    int c;
    int result;

    visit = malloc(sizeof(int) * arr_count + 1);
    i = 0;
    c = 0;
    while (i < arr_count)
        visit[i++] = 0;
    i = 0;
    result = 0;
    while (i < arr_count)
    {
        if (visit [i + 1] == 0)
        {
            visit[i + 1] = 1;
            if (arr[i] != i + 1)
            {
                c = (arr[i]) - 1;
                while (visit[c + 1] == 0)
                {
                    ++result;
                    visit[c + 1] = 1;
                    if (arr[c] != c + 1)
                        c = (arr[c]) - 1;
                }
            }
        }
        ++i;
    }
    return (result);
}

int main(void)
{
    int arr_count;
    int arr[7] = {1, 3, 5, 2, 4, 6, 7};

    arr_count = 7;
    printf("%d\n", minimumSwaps(arr_count, arr));
    return (0);
}