#include <stdio.h>
void reorder(int arr[], int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[k++] = arr[i];
        }
    }
    for (int i = k; i < n; i++)
    {
        arr[i] = 0;
    }
}
int main()
{
    int arr[] = {6, 0, 7, 8, 9, 0, 0, 1, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    reorder(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}