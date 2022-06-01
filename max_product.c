#include <stdio.h>
#include <limits.h>
void findMP(int arr[], int n)
{
    if (n < 2)
    {
        return;
    }
    int maxP = INT_MIN;
    int max_i, max_j;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (maxP < arr[i] * arr[j])
            {
                maxP = arr[i] * arr[j];
                max_i = i, max_j = j;
            }
        }
    }
    printf("pair is (%d,%d)", arr[max_i], arr[max_j]);
}
int main()
{
    int arr[] = {-10, -3, 5, 6, -2};
    int n = sizeof(arr) / sizeof(arr[0]);
    findMP(arr, n);
    return 0;
}