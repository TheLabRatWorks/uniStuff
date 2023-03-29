#include<stdio.h>
int main(){
	float a;
	float b;
	printf("Enter number a: ");
	scanf("%f", &a);
	
	printf("The number is ");
	if(a<0){
		b = a*a;
		printf("negative and its square is %.2f\n", b);	
	}else{
			b = sqrt(a);
		printf("positive and its root is %.2f\n", b);	
	}
	
	return 0;
}
