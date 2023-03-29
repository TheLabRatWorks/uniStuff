#include <stdlib.h>
#include <stdio.h>

int main(){
	int array[15];
	int i = 0;
	printf("Please enter 15 numbers to display them backwards!");
	printf("\n");
	
	for(i = 0; i < 15; i++){
		int temp;
		scanf("%d", &temp);
		
		array[i] = temp;
	}
	printf("\n");
	printf("The numbers in your array are:\n");
	for(i = 0; i < 15; i++){
		printf("%d |", array[i]);
	}
	printf("\n");
	printf("The numbers in your array REVERSED are:\n");
	for(i = 14; i >= 0; i--){
		printf("%d |", array[i]);
	}
	printf("\n");
	
	printf("\n");
	
	system("pause");
	return 0;
}
