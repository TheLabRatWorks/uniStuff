#include <stdlib.h>
#include <stdio.h>

int main(){
	int array[6];
	int i = 0;
	
	printf("Please enter 6 numbers to find the lowest number of them!");
	for(i = 0; i < 6; i++){
		int temp;
		scanf("%d", &temp);
		
		array[i] = temp;
	}
	
	int lowest = array[0];
	for(i = 1; i < 6; i++){
		if(array[i] < lowest){
			lowest = array[i];
		}
	}
	
	for(i = 1; i < 6; i++){
		if(array[i] == lowest){
			printf("The lowest number is %d and it has index of %d!", lowest, i);
		}
	}
	
	system("pause");
	return 0;
}
