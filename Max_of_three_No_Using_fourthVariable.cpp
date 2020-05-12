// WAP To print the maximum of three numbers using forth variable .
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float a,b,c,max;
cout<<"Enter the first no.      ";
cin>>a;
cout<<"Enter the second no.     ";
cin>>b;
cout<<"Enter the third no.      ";
cin>>c;
max=a;
if(b>max)
max=b;
if(c>max)
max=c;
cout<<"The greatest no. is      "<<max;
getch();
}
