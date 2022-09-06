#include <stdio.h>

void merge(int arr[], int s, int e)
{
    int mid = (s + e) / 2;
    int i = s;
    int j = mid + 1;
    int k = s;
    int temp[10000];
    while (i <= mid && j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            temp[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        temp[k] = arr[i];
        k++;
        i++;
    }
    while (j <= e)
    {
        temp[k] = arr[j];
        k++;
        j++;
    }
    for (int i = s; i <= e; i++)
    {
        arr[i] = temp[i];
    }
}

void merge_sort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        merge_sort(arr, start, mid);
        merge_sort(arr, mid + 1, end);
        merge(arr, start, end);
    }
}

int main()
{
    int size, i;
    printf("Enter size of the Array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements of the Array : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Input Array : \n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    merge_sort(arr, 0, size - 1);
    printf("Sorted Array : \n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}