#include <stdio.h>

void swap(int *arr, int *arr1){
	int temp = *arr;
	*arr = *arr1;
	*arr1 = temp;	
}
void bubble_sort(int arr[], int size){
	int i,j;
	
	for(i=0; i<size-1; i++){
		
		for(j=0; j<size-i-1; j++){
		
			if(arr[j] > arr[j+1]){
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}


int main(){
	int size, number;
	int x = 0;
	int a = 0;
	
	printf("Enter how many numbers you want to enter:\n");
	scanf("%d", &size);
	
	int numbers[size];
	
	printf("Enter the numbers you want(Press enter after each number):\n");
	
	for(a=0; a<size; a++){
		
		scanf("%d", &number);
		numbers[a] = number;
	}
	
	bubble_sort(numbers,size);
	
	for(x=0; x<size; x++){
		
		printf("%d ", numbers[x]);		
	}	
}
