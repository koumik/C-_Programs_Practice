#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	float x,t,sum;
	int n=3,i;
	double a;
	cout<<"\n Enter the value of x = ";
	cin>>x;
	sum=1;
	for(i=1;i<=n;i++)
	{
		a=pow((-1),i)*pow(x,i);
		sum=sum+a;
	}
	cout<<"Sum="<<sum;
	getch();
}
