#include<stdio.h>
int main(){
	float a,b,m,n;
	
	printf("Enter number a: ");
	scanf("%f", &a);
	
	printf("Enter min limit: ");
	scanf("%f", &m);
	printf("Enter max limit: ");
	scanf("%f", &n);
	
	b=a*a*a;
	
	printf("The cube of %.2f is %.2f\n",a, b);
	if((b<m)||(b>n)){
		printf("And it makes the interval [%.2f,%.2f]\n",m,n);
	}
	
	return 0;
}
