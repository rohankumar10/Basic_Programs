#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float a,b,c;
cout<<"Enter the first no.     ";
cin>>a;
cout<<"Enter the second no.    ";
cin>>b;
cout<<"Enter the third no.     ";
cin>>c;
{
if(a>b && a>c)
cout<<"Greatest of all is      "<<a;
else if(b>a && b>c)
cout<<"Greatest of all is      "<<b;
else
cout <<"Greatest of all is     "<<c;
}
getch();
}
