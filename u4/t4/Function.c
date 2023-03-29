#include<stdio.h>
int main(){
	float x,y;
	
	printf("Enter value for x: ");
	scanf("%f", &x);
	
	if(x <= 1){
		y = 0;
	}else if(x <= 2){
		y = 0.126 * x;
	}else if(x <= 3){
		y = 0.232 * x;
	}else{
		y = 1.16 *x;
	}
	printf("The result is %.2f\n", y);
	return 0;
}
