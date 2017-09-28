#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,n;
	float sum=0;
	cout<<"enter n = ";
	cin>>n;
	for(i=1;i<=n;i++)
		sum=sum+(1.0/i);
	cout<<"\n Sum : "<<sum;
	getch();
}