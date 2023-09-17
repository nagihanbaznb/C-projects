// 17180524 Nagihan Baz

#include <stdio.h>
#pragma warning (disable:4996)
int BinarySearch(int arr[], int low, int high, int Key);

int BinarySearch(int arr[],  int low, int high, int Key)
{
    int index = -1, middle;
    middle = (low + high) / 2;

    while (low <= high)
    {

        if (arr[middle] == Key)
        {
            index = middle;
            return index;

        }
        else if (Key < arr[middle])
            return BinarySearch(arr, low, middle - 1, Key);

        else

            return BinarySearch(arr, middle + 1, high, Key);
    }
    return index;
   
}

int main()
{
    int arr[] = { 2, 3, 4, 10, 40};
    int Key = 10; int n = sizeof(arr) / sizeof(arr[0]);
    BinarySearch(arr, 0, n - 1, Key);
    int index = BinarySearch(arr, 0, n - 1, Key);
    if (index == -1) printf("The search key is not present in array\n");

    else printf("The search key is present at index %d \n", index);

    system("pause");
    return 0;
}