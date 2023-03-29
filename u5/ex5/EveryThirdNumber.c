#include <stdlib.h>
#include <stdio.h>

int main(){
	float array[15];
	float compareNum;
	int i = 0;
	
	printf("Please enter 15 real numbers!");
	for(i = 0; i < 15; i++){
		float temp;
		scanf("%f", &temp);
		array[i] = temp;
	}
	
	float comparedArray[10];
	for(i = 0; i < 10; i++){
		if(i % 3 == 0){
		printf("The value of the number on index %d is %2.f\n",i, array[i]);
		}
	}
	
	printf("\n");
	system("pause");
	return 0;
}
