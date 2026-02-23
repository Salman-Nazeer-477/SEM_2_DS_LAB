#include<stdio.h>

int main(){
	int array[100], index = -1;
	int size = 0;
	printf("Enter size of array:");
	scanf("%d", &size);
	printf("Enter array elements:");
	for(int i = 0; i < size; i++) scanf("%d", &array[i]);
	int num;
	printf("Enter number to be inserted:");
	scanf("%d", &num);
	printf("Enter index at which number is to be inserted:");
	scanf("%d", &index);
	size = size + 1;
	for(int i = size; i > index; i--){
		array[i] = array[i - 1];
	}
	array[index] = num;
	printf("Array:\n");
	for(int i = 0; i < size; i++) printf("%d " , array[i]);
	printf("\n");
	return 0;
}
			
