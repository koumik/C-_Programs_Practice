	 /*    *
	      *	*        Programe to Display this Pattern...
	     *   *
	    *	  *
	   *	   *
	   *********     */



#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,k,n;
	//cout<<"Enter the number of rows = ";
	//cin>>n;
	for(i=7;i>=1;i--)
	{
		for(j=1;j<i;j--)
			cout<<"     ";
		for(k=7;k<i;k++)
			cout<<"*";
			cout<<endl;
	}
	getch();
}





















