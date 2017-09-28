#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>
void main()
{
	clrscr();
	char Ch,next;
	cout<<"\n\n\t Enter Any alphabet : ";
	Ch=getchar();
	next=Ch+1;
	cout<<"\n\n\t Next Alphabet is : ";
	putchar(next);
	getch();
}
