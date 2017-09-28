#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	int sum();
	getch();
}
int sum()
{
	int n,i,sum=0;
	cout<<" Enter the nth number :";
	cin>>n;
	for(i=5;i<=n;i=i+5)
	{
		cout<<"\n"<<i;
		sum=sum+i;
	}
	cout<<"\n The sum of first "<<n<<" natural numbers is:  "<<sum;

}







