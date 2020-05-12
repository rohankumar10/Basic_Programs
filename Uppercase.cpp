// WAP Taking input from the user ,convert the alphabet into uppercase or lowercase .
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char a;
cout<<"Enter the alphabet:";
cin>>a;
if(a>=65 && a<=91)
{
cout<<"You have entered a upper case";
}
else if(a>=97 && a<=122)
{
cout<<"You have entered a lower case";
}
else
{
cout<<"Wrong choice";
}
getch();

