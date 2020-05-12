// WAP To print the day of the week by taking input from user .
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int opt;
cout<<"Enter the choice";
cin>>opt;
if(opt==1)
{
cout<<"Sunday";
}
else
    {
    if(opt==2)
    cout<<"Monday";
    }
    else
	{
	if(opt==3)
	cout<<"Tuesday";
	}
	else
	    {
	    if(opt==4)
	    cout<<"Wednesday";
	    }
	    else
		{
		if(opt==5)
		cout<<"Thursday";
		}
		else
		    {
		    if(opt==6)
		    cout<<"Friday";
		    }
		    else
			{
			if(opt==7)
			cout<<"Saturday";
			}
			getch();
			}
