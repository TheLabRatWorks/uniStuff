#include <stdlib.h>
#include <stdio.h>

int main(){
	int array[20];
	int i = 0;
	int sum;
	int counter;
	printf("Please enter 20 numbers!");
	printf("\n");
	
	for(i = 0; i < 20; i++){
		int temp;
		scanf("%d", &temp);
		array[i] = temp;
		
	}
	
	printf("\n");
	
	for(i = 0; i < 20; i++){
		if(array[i] > 0){
			counter++;
			sum = sum + array[i];
		}
	}

	printf("\n");
	
	printf("The sum of the numbers bigger than zero is %d and the countf of those numbers is %d", sum, counter);
	printf("\n");
	
	system("pause");
	return 0;
}
