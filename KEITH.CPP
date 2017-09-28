	     /* Program to check whether the number is
			 a keith number or not */


#include<iostream.h>
#include<conio.h>
int len(int);
int check(int);
void main()
{
	clrscr();
	int num=0,num1=0,num2=0,a[10],f=0,i,sum=0;
	num=check(num1);
	num2=num;
	for(i=len(num2)-1;i>=0;i--)
	{
		a[i]=num%10;
		num=num/10;

	}
	cout<<" \n\nThe Sequence for the Keith Number is : ";
	cout<<"\n\n\n";
	for(i=0;i<len(num2);i++)
	{

		cout<<"\t"<<a[i];
	}
	while(f==0)
	{
		for(i=0;i<len(num2);i++)

			sum=sum+a[i];
			cout<<"\t"<<sum;


		if(sum==num2)
		{
			cout<<"\n\n It is a Keith Number !!! ";
			f=1;
		}
		if(sum>num2)
		{
			cout<<"\n\n Not a Keith Number !! ";
			f=1;
		}
			for(i=0;i<len(num2);i++)
		{
			if(i!=len(num2)-1)
				a[i]=a[i+1];
			else
				a[i]=sum;
		}
		sum=0;

	}
	getch();
}
int check(int y)
{       y=0;
	cout<<"\n\n Enter the Number = ";
	cin>>y;

	if(y<10)
	{
		cout<<"\n Enter a number greater than 9 !!! ";
		check(y);

	}
	return (y);


}
int len(int x)
{
	int count=0;
	while(x>0)
	{
		x=x/10;
		count++;
	}
	return (count);
}

