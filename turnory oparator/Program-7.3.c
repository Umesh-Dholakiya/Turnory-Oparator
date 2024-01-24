#include<stdio.h>

main()

{
	
	// turnory oparator in 4 value of max:- 
	
	int a ,b ,c ,d;
	
	printf(" Enter The value of a : ");
	scanf("%d", &a);
	
	printf(" Enter The value of b : ");
	scanf("%d", &b);
	
	printf(" Enter The value of c : ");
	scanf("%d", &c);
	
	printf(" Enter The value of d : ");
	scanf("%d", &d);
	
		
	
	( a > b ) 
	
	? (( a > c ) ? (( a > d ) ? printf(" a is max ") : printf(" d is max "))
	
			   : (( c > d ) ? printf(" c is max ") : printf(" d is max "))) 
			   	
	: (( b > c ) ? (( b > d ) ? printf(" b is max ") : printf(" d is max "))
	
			   : (( c > d ) ? printf(" c is max ") : printf(" d is max ")));	
	
}
