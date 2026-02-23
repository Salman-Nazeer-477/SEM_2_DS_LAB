#include<stdio.h>

int main()
{
    int arr[100];
    int size = 0;
    printf("Enter size of array:");
    scanf("%d", &size);
    printf("Enter array elements:");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted Array:\n");
    for(int i = 0; i < size; i++) printf("%d, ", arr[i]);
    printf("\n");
    return 0;
}