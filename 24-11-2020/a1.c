#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements : ");
    for (int i = 0; i < n; i++)
        scanf(" %d", &a[i]);
    int arr1_end = (n % 2 == 0) ? ((n - 1) / 2) : (((n - 1) / 2) - 1), arr2_start = (n % 2 == 0) ? (arr1_end + 1) : (arr1_end + 2);
    int start = 0;
    while (arr1_end > 0)
    {
        int temp = a[start];
        a[start] = a[arr1_end];
        a[arr1_end] = temp;
        start++;
        arr1_end--;
    }
    start = arr2_start;
    int end = n - 1;
    while (start < n - 1)
    {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}