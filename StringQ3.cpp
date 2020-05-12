// WAP to take input from the user to find the number of character in the array .
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char line[100];
int vow=1,a;
cout<<"Enter line   ";
gets(line);
for(int i=0;line[i]!='\0';++i);
cout<<"Enter the character   ";
cin>>vow;
for(i=0;line[i]!='\0';++i)
{
if(line[i]==vow)
{
vow++;
}
}
cout<<"No. of characters are   "<<a++;
getch();
}
