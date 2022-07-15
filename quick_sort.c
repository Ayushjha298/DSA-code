#include <stdio.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int main()
{
    int A[] = {3, 5, 12, 13, 2};
    int n = 5;
    printArray(A, n);
    quickSort(A, n);
    printArray(A, n);
    return 0;
}