#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,d,e,avg;
cout<<"Marks in maths             ";
cin>>a;
cout<<"Marks in english           ";
cin>>b;
cout<<"Marks in Physics           ";
cin>>c;
cout<<"Marks in Chemistry         ";
cin>>d;
cout<<"Marks in Computer Science  ";
cin>>e;
avg=(a+b+c+d+e)/5;
cout<<"Result is                  "<<avg;
getch();
}
