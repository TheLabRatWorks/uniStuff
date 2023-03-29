#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	float Xp,Yp;
	
	float Xc,Yc;
	
	float r;
	
	float distance;
	
	printf("Enter x,y values for a point.\n");
	printf("X: ");
	scanf("%f", &Xp);
	printf("Y: ");
	scanf("%f", &Yp);
	
	printf("Enter x,y values for the center of a circle.\n");
	printf("X: ");
	scanf("%f", &Xc);
	printf("Y: ");
	scanf("%f", &Yc);
	
	printf("Enter the radius of the circle: ");
	scanf("%f", &r);
	
	distance = sqrt(pow((Xp - Xc),2) + pow((Yp - Yc),2));
	
	if(distance > r){
		printf("The point is outside the circle!");
	}else if (distance == r){
		printf("The point is on the circumference!");
	}else{
		printf("The point is inside the circle!");	
	}
	
	return 0;
}
