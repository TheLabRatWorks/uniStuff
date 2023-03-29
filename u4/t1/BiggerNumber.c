#include<stdio.h>
int main(){
	float a;
	float b;
	float max;
	
	printf("Enter number a:");
	scanf("%f", &a);
	printf("Enter number b:");
	scanf("%f", &b);	
	
	if(a>b){
		max = a;
	}else{
		max = b;
	}
	
	printf("The bigger number is: %.2f", max);	
	system("pause");
	return 0;
}
