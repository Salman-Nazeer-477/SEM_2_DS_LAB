#include<stdio.h>

int main()
{
    int arr[100], index = -1;
    int size = 0;
    printf("Enter size of array:");
    scanf("%d", &size);
    printf("Enter array elements:");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    for(int i = 1; i < size; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    printf("Sorted Array:\n");
    for(int i = 0; i < size; i++) printf("%d, ", arr[i]);
    printf("\n");
    return 0;
}