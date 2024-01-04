#include<stdio.h>
#define SIZE 20
struct book
{
char title[50];
char author[50];
int isbn;
int year;
};
void main()
{
struct book b[SIZE];
int n,i,y;
printf("Enter the Numbers of Books:");
scanf("%d",&n);
printf("\n");
for(i=0;i<n;i++)
{
printf("\tBook %d\n",i+1);
printf("\nEnter the Title:\n");
scanf("%s",b[i].title);
printf("Enter the Author:\n");
scanf("%s",b[i].author);
printf("Enter the ISBN:\n");
scanf("%d",&b[i].isbn);
printf("Enter the year of publication :\n");
scanf("%d",&b[i].year);
}
printf("Enter the year \n");
scanf("%d",&y);
for(i=0;i<n;i++)
{
if(b[i].year==y)
{
printf("%s",b[i].title);
break;
}
}
}
 


