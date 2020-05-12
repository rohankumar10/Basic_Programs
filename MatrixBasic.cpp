// WAP to print the matrix .
#include<iostream.h>
#include<conio.h>
int m,n,i,j,a[10][10];
void calculate();
void display(int b[10][10]);
void main()
{
clrscr();
cout<<"Enter the no. of rows and columns "<<"\n";
cin>>m>>n;
calculate();
display(a);
getch();
}
void calculate()
{
for(i=0;i<m;i++)
for(j=0;j<n;j++)
cin>>a[i][j];
}
void display(int b[10][10])
{
for(i=0;i<m;i++)
{cout<<"\n";
for(j=0;j<n;j++)
cout<<b[i][j]<<"\t";
}cout<<"\n"<<"\n";
for(i=0;i<m;i++)
{cout<<"\n";
for(j=0;j<n;j++)
if(i<j)
cout<<b[i][j]<<"\t";
else
cout<<"\t";
}}
