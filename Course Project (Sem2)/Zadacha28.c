//Da se sustavi programa za obrabotka na masiv A[6,5] sustaven ot realni chisla sus stoinosti v intervala [0; 99.9].
//Programata da izvurshi slednite deistviq:
//- otpechatvane na uslovieto na zadachata;
//- otpechatvane na imenata na awtora na programata;
//- vuvejdane na vhodnite danni;
//- otpechatvane na vhodnite danni;
//- da se obrazuva nov masiv B, elementite na koito sa sumite ot A[I,J]<0 po koloni;
//- da se otpechatat poluchenite rezultati po vreme i sled obrabotkata

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	
	printf("\t Kursov Proekt \n\n");
	printf("  Mihail  Valentinov  Matov  |  No:361222034 \n\n");
	printf("  Zadacha: \n");
	printf(" Da se sustavi programa za obrabotka na masiv A[6,5] sustaven ot realni chisla sus stoinosti v intervala [0; 99.9].\n");
	printf(" Programata da izvurshi slednite deistviq:\n");
	printf("  - otpechatvane na uslovieto na zadachata;\n");
	printf("  - otpechatvane na imenata na awtora na programata;\n");
	printf("  - vuvejdane na vhodnite danni;\n");
	printf("  - otpechatvane na vhodnite danni;\n");
	printf("  - da se obrazuva nov masiv B, elementite na koito sa sumite ot A[I,J]<0 po koloni;\n");
	printf("  - da se otpechatat poluchenite rezultati po vreme i sled obrabotkata;\n\n");
	
	float A[6][5];
	float B[5];
	float temp;
	int i,j;
	char spacer[] = "      ";
	printf("");
	
	printf("Molq vuvedete vhodni danni za celiq masiv:\n\n");
	//vuvejdane na vhodni danni
	for(i = 0; i < 6; i++){
		for(j = 0; j<5; j++){
			printf("-> ");
			scanf("%f", &temp);
			while(temp < 0 || temp > 99.9){
			printf("\nThe number is not in the inverval [0 - 99.9]! Try again!\n");
			scanf("%f", &temp);	
			}
			A[i][j] = temp;
		}
	}
	
	printf("\nTova sa vhodnite danni za vashiq masiv:\n\n");
	//otpechatvane na vhodnite danni
	for(i = 0; i<6; i++){
			if(i == 2){
				printf("  A=  ");
			}else{
				printf("%s", spacer);
			}
			printf("|");
		for(j = 0; j<5; j++){
			printf(" %.1f |",A[i][j]);
		}
		printf("\n\n");
	}
	
	//sumirame kolonite ot masiv A
	for(j = 0; j<5; j++){
		float sum = 0;
		for(i = 0; i<6; i++){
			sum += A[i][j];
		}
		printf("\nThe sum for column %d is: %f\n", j, sum);
		B[j] = sum;
	}
	
	//otpechatvame rezultata v masiv B
	printf("\n\n  B=  |");
	for(j = 0; j<5; j++){
		printf(" %.1f |",B[j]);
	}
	printf("\n");
	
	return 0;
}
//Test primer
//CTRL + /  to comment uncomment

//69.8
//5.6
//48.3
//36.1
//14.9
//22.5
//70.6
//92.4
//81.7
//10.2
//28.6
//57.2
//96.8
//67.1
//44.9
//88.3
//41.8
//20.0
//31.2
//76.5
//83.1
//59.3
//9.3
//94.0
//17.8
//72.7
//50.6
//38.1
//61.9
//77.4
