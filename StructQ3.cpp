// WAP to enter the marks of the students  using struct
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int i,j;
struct student
{ char name[20];
float marks[2];
};
void sum(student s4);
void main()
{
clrscr();
student s2;
cout<<"Enter name  ";
gets(s2.name);
cout<<"Enter marks ";
for(i=0;i<2;i++)
cin>>s2.marks[i];
sum(s2);
getch();
}
void sum(student s4)
{
puts(s4.name);
}
