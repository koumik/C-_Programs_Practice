	      /* Program to check character entered is a
		  digit,alphabet or special character */


#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>
void main()
{
	clrscr();
	char ch;
	cout<<" \n\n\n Enter Anything = ";
	ch=getchar();
	if(isalpha(ch))
		cout<<"\n\n\n\t  It is an Alphabet ";
	else if(isdigit(ch))
		cout<<"\n\n\n\t It is an digit ";
	else
		cout<<"\n\n\n\t It is a special Character ";
	getch();
}