#include<stdio.h>
#define SIZE 1000 
#include<math.h>
int main(void)
{
int n,Sum=0,i; 
int ar[SIZE]; 
do
{
printf("n=");
scanf ("%d",&n);
if(n>SIZE||n<0)
 printf("Nevalidna stojnost!!! ");
} while(n>SIZE||n<=0);
for(i=0;i<n;i++) 
{
 printf("ar[%d]=",i);
 
 scanf ("%d",&ar[i]);
 Sum += pow(ar[i], 2);
}
printf("Sum=%d\n",Sum);
return 0;
}

