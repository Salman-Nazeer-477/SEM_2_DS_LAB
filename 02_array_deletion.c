#include<stdio.h>

int main(){
        int array[100], index = -1;
        int size = 0;
        printf("Enter size of array:");
        scanf("%d", &size);
        printf("Enter array elements:");
        for(int i = 0; i < size; i++) scanf("%d", &array[i]);
        printf("Enter index at which number is to be deleted:");
        scanf("%d", &index);
        for(int i = index; i < size; i++){
                array[i] = array[i + 1];
        }
	size = size - 1;
        printf("Array:\n");
        for(int i = 0; i < size; i++) printf("%d " , array[i]);
        printf("\n");
        return 0;
}
