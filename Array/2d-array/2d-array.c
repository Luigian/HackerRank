#include <stdio.h>

int hourglassSum(int arr_rows, int arr_columns, int arr[6][6]) {
    int i;
    int j;
    int sum;
    int result;

    i = 0;
    sum = 0;
    result = 0;
    while (i < arr_rows - 2)
    {
        j = 0;
        while(j < arr_columns - 2)
        {
            sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] +\
            arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] +\
            arr[i + 2][j + 2];
            if (i == 0 && j == 0)
                result = sum;
            else
                if (sum > result)
                    result = sum;
            ++j;
        }
        ++i;
    }
    return (result);
}

int main()
{
    int arr_rows;
    int arr_columns;    
    int arr[6][6] = {{1, 1, 1, 0, 0, 0},
                     {0, 1, 0, 0, 0, 0},
                     {1, 1, 1, 0, 0, 0},
                     {0, 0, 2, 4, 4, 0},
                     {0, 0, 0, 2, 0, 0},
                     {0, 0, 1, 2, 4, 0}};
    
    arr_rows = 6;
    arr_columns = 6;
    printf("%d\n", hourglassSum(arr_rows, arr_columns, arr));
    return (0);
}