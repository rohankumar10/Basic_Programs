// WAP to enter the details of the student and print the average of the marks scored by him/her in 5 subjects .	 
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct student
{int rollno;
char name[20];
float marks[5];
};
student l;
void main()
{
clrscr();
cout<<"Enter roll no  ";
cin>>l.rollno;
cout<<"Enter name  ";
gets(l.name);
cout<<"Enter marks  ";
for(int i=0;i<5;i++)
{
cout<<"\n"<<"Subject "<<i+1<<":";
cin>>l.marks[i];
}
float avg,total;
total=(l.marks[0]+l.marks[1]+l.marks[2]+l.marks[3]+l.marks[4]);
avg=total/5;
cout<<"\n";
cout<<"Student Result: ";
cout<<"\n"<<"Roll no "<<l.rollno;
cout<<"\n"<<"Name ";
puts(l.name);
cout<<"\n"<<"Total marks: "<<total;
cout<<"\n"<<"Average is "<<avg;
getch();
}
