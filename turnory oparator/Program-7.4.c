#include<stdio.h>

main()

{
	// turnory oparator in 5 value of max :- 
	int a,b,c,d,e;
	
	printf(" Enter The value of a : ");
	scanf("%d",&a);
	
	printf(" Enter The value of b : ");
	scanf("%d",&b);
	
	printf(" Enter The value of c : ");
	scanf("%d",&c);
	
	printf(" Enter The value of d : ");
	scanf("%d",&d);
	
	printf(" Enter The value of e : ");
	scanf("%d",&e);
	
	( a > b )
	
	? (( a > c ) ?  (( a > d ) ? (( a > e ) ? printf(" a is max ") : printf(" e is max "))
	 
			   : (( d > e ) ? printf(" d is max ") : printf(" e is max ")))
			   
			   : (( c > d ) ? (( c > e ) ? printf(" c is max ") : printf(" e is max "))
			   
			   : (( d > e ) ? printf("d is max") : printf("e is max"))) )
	
	: (( b > c ) ? (( b > d ) ? (( b > e ) ? printf(" b is max ") : printf(" e is max "))
	
			   : (( d > e) ? printf(" d is max ") : printf(" e is max ")))
			   
			   : (( c > d ) ? (( c > e ) ? printf(" c is max ") : printf(" e is max "))
			   
			   : (( d > e ) ? printf(" d is max ") : printf(" e is max "))) );	
			   
			   
}
