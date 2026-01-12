#include<stdio.h>

int main(){
        int array[100], index = -1;
        int size = 0;
        printf("Enter size of array:");
        scanf("%d", &size);
        printf("Enter array elements:");
        for(int i = 0; i < size; i++) scanf("%d", &array[i]);
        int num;
        printf("Enter number to be searched:");
	scanf("%d", &num);
	for(int i = 0; i < size; i++){
		if(array[i] == num) index = i;
	}
	if(index == -1) printf("%d not found in array\n", num);
	else printf("%d found at index %d\n", num, index);
        return 0;
}
