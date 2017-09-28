	    /* Program to check equality of two matrixes. */


#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int r,c,m,n,p,q,x,y;
	int a[10][10],b[10][10];
	cout<<" Enter the number of rows of the first matrix = ";
	cin>>m;
	cout<<"\n Enter the number of columns of the first matrix = ";
	cin>>n;
	cout<<" \n Enter the number of rows of second matrix = ";
	cin>>p;
	cout<<"\n Enter the number of columns of second matrix = ";
	cin>>q;
	cout<<"\n Enter 1st matrix row wise ";
	for(r=0;r<m;r++)
	{
		for(c=0;c<n;c++)
		{
			cin>>a[r][c];
		}
	}
	cout<<"\n Enter 2nd matrix row wise ";
	for(x=0;x<p;x++)
	{
		for(y=0;y<q;y++)
		{
			cin>>b[x][y];
		}
	}
	cout<<"\n First Matrix : ";
	for(r=0;r<m;r++)
	{
		cout<<"\n";
		for(c=0;c<n;c++)
		{
			cout<<" "<<a[r][c];
		}
	}
	cout<<"\n Second Matrix : ";
	for(x=0;x<p;x++)
	{
		cout<<"\n";
		for(y=0;y<q;y++)
		{
			cout<<" "<<b[x][y];
		}
	}
	int flag=0;
	for(r=0;r<m;r++)
	{
		for(c=0;c<n;c++)
		{
			if(a[r][c]!=b[r][c])
			{
				flag=1;
				break;
			}
		}
		if(flag==1) break;
	}
	if(flag!=0)
		cout<<"\n\n Matrix are unequal ";
	else
		cout<<"\n\n Matrix are equal ";
	getch();
}




