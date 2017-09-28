#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
void main()
{
	clrscr();
	char ch;
	cout<<"\n\n Enter Anything : ";
	ch=getchar();
	//if(isalpha(ch))
		//cout<<"\n Its an alphabet";
	if(isdigit(ch))
		cout<<"\n Its a digit";
	else if(isupper(ch))
		cout<<"\n Upper case character";
	else if(islower(ch))
		cout<<"\n Lower case character";
	else
		cout<<"\n Its a special number";
	getch();
}