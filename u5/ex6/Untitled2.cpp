#include<stdio.h>
void f1(int a[5]); 
int main()
{
 int x[5];
 int i;
 for(i=0;i<5;i++)
 {
 printf("[%d]=",i);
scanf("%d",&x[i]);
 }
 f1(x);
 printf("sled kraia na funkciata:\n");
 for(i=0;i<5;i++) 
 printf("[%d]=%d\n",i,x[i]);
 return 0;
}
void f1(int a[5]) 
{
 int i;
 for(i=0;i<5;i++)
 a[i]=a[i]+2;
}

