		/*   Addition,Substraction and Multiplication
			  of Two matrix. . . . . .   */
#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
	clrscr();
	int a[10][10],b[10][10],c[10][10],p,q,i,j,m,n,k;
	char ch,ch1;
	cout<<" \n Welcome to the * Matrix Calculator * ";
	cout<<" \n Enter 1 for Addition Between Two Matrix ";
	cout<<" \n Enter 2 for Substraction Between Two Matrix ";
	cout<<" \n Enter 3 for Multiplication Between Two Matrix ";
	do
	{
		cin>>ch;
		if(ch=='1')
		{
			cout<<"\n\n Addition of Matrix :- ";
			cout<<"\n For First Matrix ... ";
			cout<<"\n Input Number of rows = ";
			cin>>m;
			cout<<"\n Input Number of columns = ";
			cin>>n;
			cout<<"\n For Second Matrix ... ";
			cout<<"\n Input Number of rows = ";
			cin>>p;
			cout<<"\n Input Number of columns = ";
			cin>>q;
			if((m==q)&&(n==p))
			{
				cout<<"\n ! Matrix Addition is Possible !";
			}
			else
			{	cout<<"\n ! Matrix Addition is not Possible !";
				break;
			}
			cout<<"\n Input Elements in First Matrix Row-wise : \n ";
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					cin>>a[i][j];
				}
			}
			cout<<"\n\n First Matrix :- ";
			for(i=0;i<m;i++)
			{
				cout<<"\n";
				for(j=0;j<n;j++)
				{
					cout<<" "<<a[i][j];
				}
			}
			cout<<"\n\n Input Elements of Second Matrix Row-wise :\n ";
			for(i=0;i<p;i++)
			{
				for(j=0;j<q;j++)
				{
					cin>>b[i][j];
				}
			}
			cout<<"\n\n Second Matrix :- ";
			for(i=0;i<p;i++)
			{
				cout<<"\n";
				for(j=0;j<q;j++)
				{
					cout<<" "<<b[i][j];
				}
			}
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					c[i][j]=a[i][j]+b[i][j];
				}
			}
			cout<<"\n The Sum of Two Matrix is : \n ";
			for(i=0;i<m;i++)
			{
				cout<<"\n";
				for(j=0;j<n;j++)
				{
					cout<<" "<<c[i][j];
				}
			}
		}
		if(ch=='2')
		{
			cout<<"\n\n Substraction of Matrix :- ";
			cout<<"\n For First Matrix ... ";
			cout<<"\n Input Number of rows = ";
			cin>>m;
			cout<<"\n Input Number of columns = ";
			cin>>n;
			cout<<"\n For Second Matrix ... ";
			cout<<"\n Input Number of rows = ";
			cin>>p;
			cout<<"\n Input Number of columns = ";
			cin>>q;
			if((m==q)&&(n==p))
			{
				cout<<"\n ! Matrix Substraction is Possible !";
			}
			else
			{	cout<<"\n ! Matrix Substraction is not Possible !";
				break;
			}
			cout<<"\n Input Elements in First Matrix Row-wise : \n ";
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					cin>>a[i][j];
				}
			}
			cout<<"\n\n First Matrix :- ";
			for(i=0;i<m;i++)
			{
				cout<<"\n";
				for(j=0;j<n;j++)
				{
					cout<<" "<<a[i][j];
				}
			}
			cout<<"\n\n Input Elements of Second Matrix Row-wise :\n ";
			for(i=0;i<p;i++)
			{
				for(j=0;j<q;j++)
				{
					cin>>b[i][j];
				}
			}
			cout<<"\n\n Second Matrix :- ";
			for(i=0;i<p;i++)
			{
				cout<<"\n";
				for(j=0;j<q;j++)
				{
					cout<<" "<<b[i][j];
				}
			}
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					c[i][j]=a[i][j]-b[i][j];
				}
			}
			cout<<"\n The Substraction of Two Matrix is : \n ";
			for(i=0;i<m;i++)
			{
				cout<<"\n";
				for(j=0;j<n;j++)
				{
					cout<<" "<<c[i][j];
				}
			}
		}
		if(ch=='3')
		{
			cout<<"\n\n Multiplication of Matrix :- ";
			cout<<"\n For First Matrix ... ";
			cout<<"\n Input Number of rows = ";
			cin>>m;
			cout<<"\n Input Number of columns = ";
			cin>>n;
			cout<<"\n For Second Matrix ... ";
			cout<<"\n Input Number of rows = ";
			cin>>p;
			cout<<"\n Input Number of columns = ";
			cin>>q;
			if(n==p)
			{
				cout<<"\n ! Matrix Multiplication is Possible !";
			}
			else
			{	cout<<"\n ! Matrix multiplication is not Possible !";
				break;
			}
			cout<<"\n Input Elements in First Matrix Row-wise : \n ";
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					cin>>a[i][j];
				}
			}
			cout<<"\n\n First Matrix :- ";
			for(i=0;i<m;i++)
			{
				cout<<"\n";
				for(j=0;j<n;j++)
				{
					cout<<" "<<a[i][j];
				}
			}
			cout<<"\n\n Input Elements of Second Matrix Row-wise :\n ";
			for(i=0;i<p;i++)
			{
				for(j=0;j<q;j++)
				{
					cin>>b[i][j];
				}
			}
			cout<<"\n\n Second Matrix :- ";
			for(i=0;i<p;i++)
			{
				cout<<"\n";
				for(j=0;j<q;j++)
				{
					cout<<" "<<b[i][j];
				}
			}
			cout<<"\n Product of two Matrix : ";
			for(i=0;i<m;i++)
			{
				cout<<"\n";
				for(j=0;j<n;j++)
				{
					c[i][j]=0;
					for(k=0;k<n;k++)
					{
						c[i][j]=c[i][j]+a[i][k]*b[k][j];

					}
					cout<<" "<<c[i][j];
				}
			}
		}
		cout<<"\n Want to calculate another (y/n)?";
		cin>>ch1;
		if(ch1=='y' || ch1=='Y')
		{
			cout<<" \t Again Choose From 1 to 3 : ";

		}
	}
	while(ch1=='y' || ch1=='Y');
	getch();
}