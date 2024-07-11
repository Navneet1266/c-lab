// 5.6 WAP to display the array elements in reverse order.

#include <stdio.h>

int main()
{
    int arr[100];
    int size, i;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nArray in reverse order: ");
    for(i = size-1; i>=0; i--)
    {
        printf("%3d", arr[i]);
    }

    return 0;
}
