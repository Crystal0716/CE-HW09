#include<stdio.h>
#include <iomanip>
#include<iostream>
using namespace std ;
int change ( char x )
{
	char y ;
	y = x | 32 ;
	return ( y );
}
int remainder ( int z )
{
	int d ;
	d = z % 1000 ;
	return ( d );
}
int main ()
{
	int a , f , g , h , i , e ;
	char c , b;
	cout << "Enter your ID as E12345678 : " ;
	cin >> c >> a ;
	b = change (c);
	e = remainder ( a ) ;
	f = a / 1000 ;
	g = remainder ( f ) ;
	h = f / 1000 ;
	i = remainder ( h ) ;
	cout << b << "-" << setw (2) << setfill ('0') << i << "-" << setw (3) << setfill ('0') << g << "-"<< setw (3) << setfill ('0') << e;
	return(0);
}