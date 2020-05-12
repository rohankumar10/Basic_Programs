// WAP Taking input from the user and capitalizing the array.
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
void change(char arr[100]);
void  main()
{
clrscr();
char arr [100] ;
cout<<"Enter array   ";
cin.getline(arr,100);
int l=strlen(arr);
arr[0]=toupper(arr[0]);
for(int i=0;i<l;i++)
if (arr[i]==' ')
arr[i+1]=toupper(arr[i+1]);
puts(arr);
getch();
}
