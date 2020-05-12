// WAP to transpose the matrix .
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[10][10],b[10][10],i,j,m,n;
cout<<"no. of rows and columns:";
cin>>m>>n;
for(i=0;i<m;i++)
for(j=0;j<n;j++)
cin>>a[i][j];
for(i=0;i<n;i++)
for(j=0;j<m;j++)
b[j][i]=a[i][j];
for(i=0;i<n;i++)
{
cout<<"\n";
for(j=0;j<m;j++)
cout<<b[i][j];

}
getch();
}
