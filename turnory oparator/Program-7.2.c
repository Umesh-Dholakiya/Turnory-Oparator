#include<stdio.h>

main()

{
	
	// turnory oparator in 3 value of max :- 
	
	int a ,b ,c;
	
	printf(" Enter The value of a : ");
	scanf("%d", &a);
	
	printf(" Enter The value of b : ");
	scanf("%d", &b);
	
	printf(" Enter The value of c : ");
	scanf("%d", &c);
	
		
	
	( a > b) 
	
	? (( a > c) ? printf(" a is max ") : printf(" c is max "))
	
	: (( b > c) ? printf(" b is max ") : printf(" c is max "));
	
}
