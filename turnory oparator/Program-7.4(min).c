#include<stdio.h>

main()

{
	// turnory oparator in 5 value of min :- 
	
	int a ,b ,c ,d ,e;
	
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
	
	( a < b )
	
	? (( a < c ) ?  (( a < d ) ? (( a < e ) ? printf(" a is min ") : printf(" e is min "))
	 
			   : (( d < e ) ? printf(" d is min ") : printf(" e is min ")))
			   
			   : (( c < d ) ? (( c < e ) ? printf(" c is min ") : printf(" e is min "))
			   
			   : (( d < e ) ? printf("d is min") : printf("e is min"))) )
	
	: (( b < c ) ? (( b < d ) ? (( b < e ) ? printf(" b is min ") : printf(" e is min "))
	
			   : (( d < e) ? printf(" d is min ") : printf(" e is min ")))
			   
			   : (( c < d ) ? (( c < e ) ? printf(" c is min ") : printf(" e is min "))
			   
			   : (( d < e ) ? printf(" d is min ") : printf(" e is min "))) );	
			   
			   
}
