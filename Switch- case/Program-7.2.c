#include<stdio.h>

main()
{
	int choice ,a;

	printf("press 1 for English\n");
	printf("press 2 for Hindi\n");
	printf("press 3 for Gujarati\n");

	printf("Choice Your Language : ");
	
	scanf("%d",&choice);

	switch(choice){

		case 1:
			printf("press 1 for Internet Recharge\n");
			printf("press 2 for Top-up Recharge\n");
			printf("press 3 for Special Recharge\n");

			printf("Enter your choice for Recharge : ");
			scanf("%d" ,&a);

		switch(a){

     	case 1:
	    	printf("you have successfull Internet Recharge.\n");
	    	break;

     	case 2:
	    	printf("you have successfully Top-UP Recharge.\n");
	    	break;

     	case 3:
	    	printf("you have successfully Special Recharge.\n");
	    	break;

     	default:
	    	printf("Please Enter Your Recharge Pack.");
	    

	}
		break;

		case 2:
			printf("Internet Recharge ke liye 1 dabaiye\n");
			printf("Top-up Recharge ke liye 2 dabaiye\n");
			printf("Special Recharge ke liye 3 dabaiye\n");

			printf("Enter your choice for Recharge plan : ");
			scanf("%d" ,&a);

			switch(a){

				case 1:
					printf("Aapne safaltapurvak Internet Recharge kar liya he.");
					break;
					
				case 2:
					printf("Aapne safaltapurvak Top-up Recharge kar liya he.");
					break;
					
				case 3:
					printf("Aapne safaltapurvak Special Recharge kar liya he.");
					break;
					
				default:
					printf("Please Enter Your Recharge Pack :");

			}

		break;

		case 3:
			printf("Internet Recharge mate 1 dabavo\n");
			printf("Top-up Recharge mate 2 dabavo\n");
			printf("Special Recharge mate 3 dabavo\n");

			printf("Enter your choice for Recharge Plan : ");
			
			scanf("%d",&a);

			switch(a){

				case 1:
					printf("Tame safaltapurvak Internet Recharge karyu chhe.");
					break;
					
				case 2:
					printf("Tame safaltapurvak Top-up Recharge karyu chhe.");
					break;
					
				case 3:
					printf("Tame safaltapurvak Special Recharge karyu chhe.");
					break;
					
				default:
					printf("Please Enter Your Recharge Pack :");

			}

		break;

		default:
			printf("please enter valid choice :");

	}
}
