#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{	clrscr();
	char a[100];
	int i,n;
	cout<<"\n\t Enter the string : ";
	cin.getline(a,100);
	n=strlen(a);
	for(i=0;a[i]!='\0';i++)
		if(a[i]==' ')
			a[i]='-';
	cout<<"The changed string is : \n ";
	//cout<<a;
	cout.write(a,n);
	cout<<"\nThe length of the string is  "<<n;
	getch();
}

