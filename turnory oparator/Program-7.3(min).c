#include<stdio.h>

main()

{
	
	// turnory oparator in 4 value of min :- 
	
	int a ,b ,c ,d;
	
	printf(" Enter The value of a : ");
	scanf("%d", &a);
	
	printf(" Enter The value of b : ");
	scanf("%d", &b);
	
	printf(" Enter The value of c : ");
	scanf("%d", &c);
	
	printf(" Enter The value of d : ");
	scanf("%d", &d);
	
		
	
	(a < b) 
	
	? ((a < c) ? ((a < d) ? printf("a is min") : printf("d is min"))
	
			   : ((c < d) ? printf("c is min") : printf("d is min"))) 
			   	
	: ((b < c) ? ((b < d) ? printf("b is min") : printf("d is min"))
	
			   : ((c < d) ? printf("c is min") : printf("d is min")));	
	
}
