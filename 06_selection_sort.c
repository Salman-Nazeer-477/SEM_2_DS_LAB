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
    int i_min;
    int temp;
    for(int i = 0; i < size - 1; i++){
        i_min = i;
        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[i_min]){
                i_min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[i_min];
        arr[i_min] = temp;
    }
    
    printf("Sorted Array:\n");
    for(int i = 0; i < size; i++) printf("%d, ", arr[i]);
    printf("\n");
    return 0;
}