#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int age, menu;
	printf("Enter an age:");
	scanf("%d", &age);
	if(age < 0 || age > 101){
		printf("\nThere is no such age!\n");
	}else{
		if(age >= 1 && age <= 3) menu = 1;
		if(age >= 4 && age <= 12) menu = 2;
		if(age >= 13 && age <= 19) menu = 3;
		if(age >= 20 && age <= 30) menu = 4;
		if(age >= 31 && age <= 40) menu = 5;
		if(age >= 41 && age <= 55) menu = 6;
		if(age >= 56 && age <= 70) menu = 7;
		if(age >= 71 && age <= 100) menu = 8;
		switch(menu){
			case 1: printf("Your age is for - a kid!");
			case 2: printf("Your age is for - a toddler!");
			case 3: printf("Your age is for - a teenager!");
			case 4: printf("Your age is for - a young person!");
			case 5: printf("Your age is for - a middle aged person!");
			case 6: printf("Your age is for - a mature person!");
			case 7: printf("Your age is for - a pensioneer!");
			case 8: printf("Your age is for - an old person!");
		}
	}
	
	return 0;
}
