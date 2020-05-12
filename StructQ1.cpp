// WAP to enter the details of the employee using structure. 
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct addr
{
int Hno;
char street[20];
char state[20];
};
struct emp
{
int Eno;
char name[20];
addr ad;
float salary;
};
void main()
{
clrscr();
emp e;
cout<<"Enter Eno  ";
cin>>e.Eno;
cout<<"name  ";
gets(e.name);
cout<<"Hno  ";
cin>>e.ad.Hno;
cout<<"street  ";
gets(e.ad.street);
cout<<"Salary  ";
cin>>e.salary;
cout<<e.Eno<<"\n";
cout<<e.name<<"\n";
puts(e.ad.street);
getch();
}
