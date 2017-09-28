#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	int i,j,k,a;
	char s[100][100],x;
	cout<<"\n\n Enter 3 Strings : ";
	for(i=0;i<3;i++)
		cin.getline(s[i],100);
	cout<<" \n\n The list of original strings are : ";
	for(i=0;i<3;i++)
		cout<<"\n"<<s[i];
	for(i=0;i<3;i++)
	{
		a=strlen(s[i]);
		for(j=0,k=a-1;j<a/2;j++,k--)
		{
			x=s[i][j];
			s[i][j]=s[i][k];
			s[i][k]=x;
		}
	}
	cout<<"\n\n The reversed string is : ";
	for(i=0;i<3;i++)
		cout<<"\n"<<s[i];
	getch();
}
