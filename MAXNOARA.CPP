#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
	clrscr();
	void max(int[],int);
	int a[50],i,n,k;
	cout<<"\n\n Enter size of array :";
	cin>>n;
	cout<<"\n\n Enter elements of array : ";
	for(i=0;i<n;i++)

		cin>>a[i];

	k=max(a,n);
	cout<<"\n\n Largest element is : "<<k;
	getch();
}
void max(int b[],int n)
{
	int max,i;
	max=b[0];
	for(i=1;i<n;i++)
	{
		if(max<b[i])
			max=b[i];
	}
}

