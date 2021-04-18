#include<stdio.h>
main()
{
	//1.dispaly the  menu
	printf("pick an item : \n1 .Pasta\n2. Burger\n3. Pizza\n4. French fries\n5 . Sandwich");
	//2.read thier choice
	int choice=0;
	scanf("%d", &choice);	
	//3.display based on the choice
	
	switch(choice)
	{
		case 1:
			printf("you picked PASTA \n\n Rs179 \n ");
			break;
		case 2:
			printf("you picked BURGER \n\n Rs 129 \n");
			break;
		case 3:
			printf("you picked PIZZA \n\n Rs 239 \n");
			break;
		case 4:	
			printf("you picked FRENCH FRIES \n\n Rs99 \n");
			break;
		case 5:
			printf("you picked SANDWITCH \n\n Rs 149 \n");
			break;
		default :printf("Invalid choice");
	}
}
