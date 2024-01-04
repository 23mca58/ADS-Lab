#include<stdio.h>
#include<stdlib.h>
void add();
void subtract();
void multiply();
void display();
int main()
{
int r,c,a[10][10],b[10][10],sum[10][10],s[10][10],i,j,ch;
printf("Enter the number of rows : ");
scanf("%d",&r);
printf("Enter the number of columns : ");
scanf("%d",&c);
printf("\nEnter elements of 1st matrix:\n");
for(i=0;i<r;++i)
 for(j=0;j<c;++j) 
{
  printf("Enter element a%d%d: ",i+1,j+1);
  scanf("%d",&a[i][j]);
}
printf("Enter elements of 2nd matrix:\n");
for(i=0;i<r;++i)
{
for(j=0;j<c;++j) 
{
 printf("Enter element b%d%d: ",i+1,j+1);
 scanf("%d",&b[i][j]);
}
}
do
{
printf("\nChoose the matrix operation,\n");
printf("1.Addition\n");
printf("2.Subtraction\n");
printf("3.Multiplication\n");
printf("4.Exit\n");
printf("Enter your choice: ");
scanf("%d",&ch);
switch(ch) 
 {
case 1:
 add(a,b,s);
 printf("Sum of matrix:\n");
 display(s);
break;
case 2:
 subtract(a,b,s);
 printf("Subtraction of matrix:\n");
 display(s);
break;
case 3:
 multiply(a,b,s);
 printf("Multiplication of matrix:\n");
 display(s);
break;
case 4:
 exit(0);
default:
 printf("Invalid input.\n");
 printf("Please enter the correct input.\n");
}
}while(ch>=0&&ch<=4);
return 0;
}
void add(int m[10][10],int n[10][10],int sum[10][10])
{
 for(int i=0;i<10;i++)
 {
  for(int j=0;j<10;j++)
  {
   sum[i][j]=m[i][j]+n[i][j];
  }
 }
}
void subtract(int m[10][10],int n[10][10],int result[10][10])
{
for(int i=0;i<10;i++)
{
 for(int j=0;j<10;j++)
 {
  result[i][j]=m[i][j]-n[i][j];
  }
 }
}    
void multiply(int m[10][10],int n[10][10],int result[10][10])
{
for(int i=0;i<10;i++)
{
 for(int j=0;j<10;j++)
 {
 result[i][j] = 0;
 for (int k=0;k<2;k++)
  result[i][j]+=m[i][k]*n[k][j];
    }
  }
}
void display(int matrix[10][10])
{
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<3;j++)
      printf("%d\t",matrix[i][j]);
    printf("\n");
  }
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
