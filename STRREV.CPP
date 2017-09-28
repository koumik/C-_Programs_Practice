#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
	clrscr();
	char str[100],rev[100];
	int i,j,k;
	cout<<"\n\n Enter the string : ";
	gets(str);
	for(i=0;str[i]!='\0';i++);
	for(j=i-1,k=0;j>=0;j--,k++)

		rev[k]=str[j];
	rev[k]='\0';
	cout<<"\n\n The reversed string : ";
	puts(rev);
	getch();
}