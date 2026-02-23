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
    int high = size - 1;
    int low = 0;
    int mid = (high + low) / 2;
    
    int num;
    printf("Enter number to be searched:");
    scanf("%d", &num);

    while(arr[mid] != num){
        if(arr[mid] < num){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
        mid = (high + low) / 2;
    }
    printf("%d found at index: %d\n", num, mid);
    return 0;
}