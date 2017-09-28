#include<iostream.h>
#include<conio.h>
void main()
{       int insum(int);
	clrscr();
	int num,i,sum=0,h;
	cout<<" enter a number = ";
	cin>>num;
	for(i=2;i<=num;i++)
	{
		while(num%i==0)
		{
			num=num/i;
			cout<<i<<" ";
			h=insum(i);
			sum=sum+h;
		}


	}
	cout<<"\n sum is = "<<sum;
	//cout<<endl;
	getch();
}
int insum(int x)
{       int cal,c=0,a=10,b=1;
	do
	{
		c=((x%a)/b)+c;
		a=a*10;
		b=b*10;
	}
	while(b<x);
	cal=c;
	return (cal);

}

