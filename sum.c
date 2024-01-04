#include<stdio.h>
int Sum(int arr[],int n)
{
int sum=0;
for(int i=0;i<6;++i)
{
sum+=arr[i];
}
return sum;
}

int main()
{
int i,n,result,arr[15];
printf("Enter the number of elements in the array: ");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
result= Sum(arr,n);
printf("Result = %d\n",result);
return (0);
}

