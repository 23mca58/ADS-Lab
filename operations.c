#include<stdio.h>
#include<stdlib.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int divi(int,int);
int main()
{
int a,b,c;
printf("Enter the first number: ");
scanf("%d",&a);
printf("Enter the second number: ");
scanf("%d",&b);
do
{
printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n");
printf("Enter your choice :");
scanf("%d",&c);
switch(c)
{
case 1:
printf("%d + %d = %d\n",a,b,add(a,b));
break;
case 2:
printf("%d - %d = %d\n",a,b,sub(a,b));
break;
case 3:
printf("%d * %d = %d\n",a,b,mul(a,b));
break;
case 4:
printf("%d / %d = %d\n",a,b,divi(a,b));
break;
case 5:
exit(0);
default:
printf("Entered wrong choice\n");
}
}while(c<=5);
return(0);
}

int add(int a,int b)
{
return (a+b);
}
int sub(int a,int b)
{
return (a-b);
}
int mul(int a,int b)
{
return (a*b);
}
int divi(int a,int b)
{
return (a/b);
}





