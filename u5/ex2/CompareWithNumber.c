#include <stdlib.h>
#include <stdio.h>

int main(){
	float array[10];
	float compareNum;
	int i = 0;
	printf("Please enter 10 real numbers!");
	for(i = 0; i < 10; i++){
		float temp;
		scanf("%f", &temp);
		array[i] = temp;
	}
	printf("Please enter a number you want to compare with!\n");
	scanf("%f", &compareNum);
	
	int j = 0;
	float comparedArray[10];
	for(i = 0; i < 10; i++){
		if(array[i] > compareNum){
			comparedArray[j] = array[i];
			j++;
		}
	}
	printf("The numbers bigger then the compare number are:\n");
	int secondArraySize = j;
	for(j = 0; j < secondArraySize; j++){
		printf("%2.f", comparedArray[j]);
	}
	printf("\n");
	
	system("pause");
	return 0;
}
