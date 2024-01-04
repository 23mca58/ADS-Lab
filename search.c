#include<stdio.h>
void linear(int arr[], int n)
{
int i=0,f=0,x;
printf("Enter the item to be searched : ");
scanf("%d",&x);
while(i<=n)
{
if(x==arr[i])
{
f=1;
break;
}
else
{
 i=i+1;
}
}
if(f==1)
{
 printf("Search is successful and element found at index %d ",i);
}
else
{
 printf("Not found");
}
}
void binary(int arr[], int n)
{
int pos=-1;
int mid,lb=0,ub=n,x;
printf("Enter the item to be searched : ");
scanf("%d",&x);
while(lb<=ub)
{
mid=(lb+ub)/2;
if(arr[mid]==x)
{
 pos=mid;
 printf("%d",pos);
break;
}
else if(arr[mid]>x)
{
 ub=mid-1;
}
else
 lb=mid+1;
if(pos==-1)
{
 printf("Item is not present in the array");
}
else
printf("Item is present at %d ",pos);
}
}
void main()
{
int arr[50],n,x,c,i;
printf("Enter the no of elements in array:\n");
scanf("%d",&n);
printf("Enter the elements in the array:\n");
for(i=1;i<=n;i++)
{
scanf("%d",&arr[i]);
}
printf("\n Elements of array:\n");
for(i=1;i<=n;i++)
{
printf("%d\t",arr[i]);
}
do
{
printf("\nMake a choice from the options given below\n");
printf("1.LINEAR SEARCH\n");
printf("2.BINARY SEARCH\n");
printf("Enter your choice : ");
scanf("%d",&c);
switch(c)
{
case 1:
 linear(arr,n);
break;
case 2:
 binary(arr,n);
break;
default:
 printf("\nInvalid choice\n");
}
}while(c<3);
}




