#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int a,b,c;
	float d,x1,x2;
	
	printf("Enter number for a: ");
	scanf("%d", &a);
	
	printf("Enter number for b: ");
	scanf("%d", &b);
	
	printf("Enter number for c: ");
	scanf("%d", &c);
	
	d = ((b*b) - (4*a*c));
	
	if(d< 0){
		printf("There are no real solutions.");
	} else if(d > 0){
		printf("The discriminant is %.2f", d);
		x1 = -(b + sqrt(d))/(2*a);
		x2 = -(b - sqrt(d))/(2*a);
		printf("x1: %.2f\n", x1);
		printf("x2: %.2f\n", x2);
	}else{
		x1 = b/(2*a);
		printf("The equation has to two equal solutions x1=x1=%.2f\n", x1);
	}
	return 0;
}
