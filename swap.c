#include<stdio.h>
int swap(int *a,int *b)
{
int t;
t=*a;
*a=*b;
*b=t;
}
int main()
{
int n1,n2;
printf("Enter the first number: ");
scanf("%d",&n1);
printf("Enter the second number: ");
scanf("%d",&n2);
printf("Before swapping : %d %d\n",n1,n2);
swap(&n1,&n2);
printf("After swapping : %d %d\n",n1,n2);
return 0;
}
