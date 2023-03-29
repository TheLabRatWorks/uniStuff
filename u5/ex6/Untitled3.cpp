#include<stdio.h>
#define MAX 50
int findMaxElem(int x[MAX],int n); 
int findSum(int x[MAX],int n); 
int main()
{
 int arr1[MAX];
 int mxelem,i,n,sum=0;
 printf(" n= "); 
 scanf("%d",&n);

 printf(" Vavedete %d elementa v masiva :\n",n);
 for(i=0;i<n;i++) 
 {
 printf(" element - %d : ",i);
 scanf("%d",&arr1[i]);
}
 sum=findSum(arr1,n); 
 mxelem=findMaxElem(arr1,n);
 printf(" The sum is : %d\n",sum); 
 printf(" The max is : %d\n",mxelem);
 return 0;
}
int findSum(int arr1[MAX],int n)
{
 int i=0,s=0; 
 while(i < n)
{
 s=s+arr1[i];
 i++;
 }
 return s;
}
int findMaxElem(int arr1[MAX],int n)
{
 int i=1,mxelem; 
 mxelem=arr1[0];
 while(i < n)
{
 if(mxelem<arr1[i])
 mxelem=arr1[i];
 i++;
 }
 return mxelem;
}
