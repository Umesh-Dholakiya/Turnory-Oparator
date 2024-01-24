#include<stdio.h>

main()
	
{
	// switch - case for menu card :- 
	
	int choice ,a;
	
	printf("Press 1 for Ice cream\n");
	printf("Press 2 for Cake\n");
	printf("Press 3 for Cocktails\n");

	printf("Enter your choice : ");
	scanf("%d",&choice);
	
	switch(choice){
		
		case 1:
			printf("\nyour choice for Ice cream\n\n");
				
				printf("Press 1 for Vanilla Bean\n");
				printf("Press 2 for Peanut Butter\n");
				printf("Press 3 for Green Apple\n");
				printf("Press 4 for Cotton Candy\n");
				printf("Enter your choice for Ice cream : ");
				
				scanf("%d",&a);
				
				switch(a){
					
					case 1:
						printf("you ordered Vanilla Bean Ice cream");
						break;
						
					case 2:	
						printf("you ordered Peanut Butter Ice cream");
						break;
						
					case 3:	
						printf("your ordered for Green Apple Ice cream");
						break;
						
					case 4:	
						printf("your ordered for Cotton Candy Ice cream");
						break;
					printf("\n\n\n");	
					default:
						printf("You Enter the Valid Number : ");
							
				}
			break;
			
		case 2:
			printf("\nyour choice for Cake\n\n");
			
			printf("Press 1 for Cheese Cake\n");
			printf("Press 2 for Chocolate Cake\n");
			printf("Press 3 for Cherry Cake\n");
			printf("Press 4 for Apple Cake\n");
			
			printf("Enter your choice for Cake : ");
			
			scanf("%d",&a);
			
			switch(a){
				
				case 1:
					printf("your ordered for Cheese Cake");
					break;
					
				case 2:	
					printf("your ordered for Chocolate Cake");
					break;
					
				case 3:	
					printf("your ordered for Cherry Cake");
					break;
					
				case 4:	
					printf("your ordered for Apple Cake");
					break;
					
				default:
					printf("You Enter the Valid Number : ");
					
			}
			
			break;
		case 3:
			printf("\nyour choice for Cocktails\n\n");
			
			printf("Press 1 for Classic Mojito \n");
			printf("Press 2 for Raspberry Mojito\n");
			printf("Press 3 for Dry Fruit Mojito\n");
			printf("Press 4 for Classic Margarita\n");
			
			
			printf("Enter your choice for Cocktails : ");
			scanf("%d",&a);
			
			switch(a){
				
				case 1:
					printf("your ordered for Classic Mojito ");
					break;
					
				case 2:	
					printf("your ordered for Raspberry Mojito ");
					break;
					
				case 3:	
					printf("your ordered for Dry Fruit Mojito");
					break;
					
				case 4:	
					printf("your ordered for Classic Margarita");
					break;
					
				default:
					printf("You Enter the Valid Number : ");
					
			}
			break;
	}
	
}
