#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int range,f=0,s=1,fibo=0,i;
	cout<<" Enter the range : ";
	cin>>range;
	cout<<"\n Fibonacci series upto "<<range<<" terms"<<endl;
	for(i=0;i<range;i++)
	{
		if(i<=1)
			fibo=i;
		else
		{
			fibo=f+s;
			f=s;
			s=fibo;
		}
		cout<<fibo<<" ";
	}
	getch();
}

