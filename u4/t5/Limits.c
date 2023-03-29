#include<stdio.h>
#include<stdlib.h>
int main(){
	int m,n,p,q;
	int a,del;
	
	printf("Enter number for a: ");
	scanf("%d", &a);
	printf("Enter number for del: ");
	scanf("%d", &del);
	
	printf("Enter the limits for the first interval\n");
	printf("M= ");
	scanf("%d", &m);
	printf("N= ");
	scanf("%d", &n);
	
	
	printf("Enter the limits for the second interval\n");
	printf("P= ");
	scanf("%d", &p);
	printf("Q= ");
	scanf("%d", &q);
	
	if(a % del == 0){
		printf("The number %d can be devided by %d.\n", a, del);
		a=a*a;
		if((a>m)||(a<n)){
			printf("Its square is in the interval %d - %d\n",m,n);
		}else{
			printf("Its square is not in the interval %d - %d\n",m,n);
		}
	}else{
		printf("The number %d can not be devided by %d.\n", a, del);
		a=2*a;
		if((a>p)||(a<q)){
			printf("Its doubled value in the interval %d - %d\n",p,q);
		}else{
			printf("Its doubled value is not in the interval %d - %d\n",p,q);
		}
	}

	return 0;
}
