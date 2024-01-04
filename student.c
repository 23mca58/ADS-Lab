#include<stdio.h>
struct student 
{
int rollno;
float marks;
}s1;
int main() 
{
s1.rollno=1;
s1.marks=90;
printf("Student Rollno=%d\n",s1.rollno);
printf("Student Marks=%f\n",s1.marks);
return 0;
}
