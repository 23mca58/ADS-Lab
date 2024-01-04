#include<stdio.h>
void push();
void pop();
void display();
int stack[20],i,n,x,ch=0,top=-1;
void push()
{
 if(top==n-1)
  {
   printf("\nSTACK is over flow");
   }
  else
   {
    printf(" Enter the value to be pushed:");
    scanf("%d",&x);
    top++;
    stack[top]=x;
   }
}
void pop()
{
  if(top<=-1)
    {
     printf("\nStack is under flow");
    }
  else
    {
     printf("\nThe popped elements is %d",stack[top]);
     top--;
   }
}
void display()
{
  if(top>=0)
   {
    printf("\n The elements in STACK \n");
     for(i=top; i>=0; i--)
       printf("\n%d",stack[i]);
    }
   else
    {
     printf("\n The STACK is empty");
    }
}
int main()
{
printf("Enter the number of elements in the stack : ");
scanf("%d",&n);
printf("Make a choice from the options given below\n");
printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
do
{
printf("\n Enter the Choice:");
scanf("%d",&ch);
switch(ch)
{
 case 1:
  {
   push();
   break;
  }
 case 2:
  { 
   pop();
   break;
  }
 case 3:
  {
   display();
   break;
   }
 case 4:
  {
   printf("\nEXIT\n");
   break;
   }
  default:
   {
    printf("\nPlease Enter a Valid Choice\n");
    }
  }
 }while(ch<4);
 return 0;
}


