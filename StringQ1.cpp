// WAP to print hyphen between the letters of the array .
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
clrscr();
char arr[50];
cout<<"Enter array(max.-49 char)";
cin.getline(arr,50);
int l=strlen(arr);
for(int i=0;arr[i]!='\0';i++)
if(arr[i]==' ')
arr[i]='-';
cout<<"New string is";
puts(arr);
getch();
}
