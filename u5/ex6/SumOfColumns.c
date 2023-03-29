#include <stdlib.h>
#include <stdio.h>

int main(){
	float array[5][7];
	float compareNum;
	int i = 0;
	int j = 0;
	
	printf("Please enter 5 columns of 7 numbers real numbers!\n");
	for(i = 0; i < 5; i++){
		printf("Column number %d: \n", i+1);
		for(j = 0; j < 7; j++){
		float temp;
		scanf("%f", &temp);
		array[i][j] = temp;
		}
	}
	printf("\n");
	for(i = 0; i < 5; i++){
		float sum = 0;
		for(j = 0; j < 7; j++){
		
		sum += array[i][j];
		}
		printf("The sum for column %d is %f\n", i+1, sum);
	}
	
	printf("\n");
	system("pause");
	return 0;
}
