   /* Program to display marks of students */



#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	const int a=5;
	float marks[a];
	for(int i=0;i<a;i++)
	{
		cout<<"\n\t Enter marks of Student "<<i+1<<"\n";
		cin>>marks[i];
	}
	for(i=0;i<a;i++)
		cout<<"\n\n\t Marks["<<i<<"]="<<marks[i]<<"\n";
	getch();
}