#include<stdio.h>
#include<math.h>
#include<string.h>
	
int main() 
{ 
int choice,choose,select,quantity,price;
int sum=0;
int total=0,total1=0,total2=0,total3=0;
int Name;
int number;
printf("==========================================welcome to our cafe===========================================\n");
printf("---------------------------------------we are happy to see you---------------------------------------\n");
while(1)
{

printf("please select your order type\n");
printf("choice 1.veg 2.non-veg 3.exit\n");
scanf("%d",&choice);
switch(choice)
{
	case 1:
	if(choice==1)
	{
		
		printf("ok! please select your veg meal\n");
		printf("select 1.burger 2.pizza 3.pasta\n");
		scanf("%d",&select);
		//burger condition
		    if(select==1)
			{
				printf("ok you selected burger\n");
				printf("please select patty you want in your burger\n");
				printf("choose 1.aloo patty 2. beans and corn patty 3.mixed patty\n");
				scanf("%d",&choose);
				
				if(choose==1)
				{
					printf("ok! you have selected aloo patty\n");
						printf("price of 1 aloo patty burger is 50$\n");
					printf("please enter the quantity\n");
					scanf("%d",&quantity);
				
					total=50*quantity;
					printf("your total quantity price is: %d",total);
					total1=total;	
				}
				else if(choose==2)
				{
					printf("ok! you have selected beans and corn patty\n");
					printf("price of 1 beans and corn patty burger is 60$\n");
					printf("please enter the quantity\n");
					scanf("%d",&quantity);
					
					total=60*quantity;
					printf("your total quantity price is: %d",total);
					total2=total;
				}
				else if(choose==3)
				{
					printf("ok! you have selected mixed patty\n");
					printf("price of 1 mixed patty burger is 70$\n");
					printf("please enter the quantity\n");
					scanf("%d",&quantity);
					
					total=70*quantity;
					printf("your total quantity price is: %d",total);
					total3=total;
				}
			}
			
			//pizza condition
			else if(select==2)
			{
					printf("ok you selected pizza\n");
				printf("alert!! we only provide regular size pizza\n");
				printf("please select which type of pizza you want\n");
				
				printf("choose 1.paneer makhani pizza  2.  corn pizza  3.plan cheez pizza\n");
				scanf("%d",&choose);
				
				if(choose==1)
				{
					printf("ok! you have selected paneer makhani pizza\n");
						printf("price of 1 paneer makhani pizza is 150$\n");
					printf("please enter the quantity\n");
					scanf("%d",&quantity);
				
					total=150*quantity;
					printf("your total quantity price is: %d",total);
					total1=total;
					
				}
				else if(choose==2)
				{
					printf("ok! you have selected corn pizza \n");
						printf("price of 1 corn pizza  is 100$\n");
					printf("please enter the quantity\n");
					scanf("%d",&quantity);
				
					total=100*quantity;
					printf("your total quantity price is: %d",total);
					total2=total;
				}
				else if(choose==3)
				{
					printf("ok! you have selected plan cheez pizza\n");
						printf("price of 1 plan cheez pizza is 80$\n");
					printf("please enter the quantity\n");
					scanf("%d",&quantity);
				
					total=80*quantity;
					printf("your total quantity price is: %d",total);
					total3=total;
				}
		   }
		   
		   //pasta condition
		   else if(select==3)
		   {
		   			printf("ok you selected pasta\n");
				
				printf("please select which type of pasta you want\n");
				
				printf("choose 1.white pasta  2. salsa pasta  3.hot chilli pasta\n");
				scanf("%d",&choose);
				
				if(choose==1)
				{
					printf("ok! you have selected white pasta\n");
						printf("price of 1 white pasta is 50$\n");
					printf("please enter the quantity\n");
					scanf("%d",&quantity);
				
					total=50*quantity;
					printf("your total quantity price is: %d",total);
					total1=total;
					
				}
				else if(choose==2)
				{
					printf("ok! you have selected salsa pasta \n");
					printf("price of 1 salsa pasta  is 75$\n");
					printf("please enter the quantity\n");
					scanf("%d",&quantity);
					
					total=75*quantity;
					printf("your total quantity price is: %d",total);
					total2=total;
				}
				else if(choose==3)
				{
					printf("ok! you have selected hot chilli pasta\n");
						printf("price of 1 hot chilli pasta is 40$\n");
					printf("please enter the quantity\n");
					scanf("%d",&quantity);
				
					total=40*quantity;
					printf("your total quantity price is: %d",total);
					total3=total;
				}
		   	
		   	
		   	
		   	
		   }
		
		
	}
	break;
	
	
	case 2:
			if(choice==2 )
	{
		
		printf("ok! please select your non-veg meal\n");
	    printf(" alert!! we only provide chicken in non-veg\n");
		printf("select 1.burger 2.pizza 3.pasta\n");
		scanf("%d",&select);
		//burger condition
		    if(select==1)
			{
				printf("ok you selected burger\n");
		        printf("please select patty you want in your burger\n");
				printf("choose 1.chicken patty 2. barbeque chicken patty 3.mixed patty\n");
				scanf("%d",&choose);
				
				if(choose==1)
				{
					printf("ok! you have selected chicken patty\n");
					printf("price of 1 chicken patty burger is 50$\n");
					printf("please enter the quantity\n");
					scanf("%d",&quantity);
					
					total=50*quantity;
					printf("your total quantity price is: %d",total);
					total1=total;	
				}
				else if(choose==2)
				{
					printf("ok! you have selected barbeque chicken patty\n");
						printf("price of 1 barbeque chicken patty burger is 60$\n");
					printf("please enter the quantity\n");
					scanf("%d",&quantity);
				
					total=60*quantity;
					printf("your total quantity price is: %d",total);
					total2=total;
				}
				else if(choose==3)
				{
					printf("ok! you have selected mixed patty\n");
						printf("price of 1 mixed patty burger is 70$\n");
					printf("please enter the quantity\n");
					scanf("%d",&quantity);
				
					total=70*quantity;
					printf("your total quantity price is: %d",total);
					total3=total;
				}
			}
			
			//pizza condition
			else if(select==2)
			{
					printf("ok you selected pizza\n");
				printf("alert!! we only provide regular size pizza\n");
				printf("please select which type of pizza you want\n");
				
				printf("choose 1.chicken masala pizza  2.salsa chicken pizza  3.chicken cheez pizza\n");
				scanf("%d",&choose);
				
				if(choose==1)
				{
					printf("ok! you have selected chicken masala pizza\n");
						printf("price of 1 chicken masala pizza is 150$\n");
					printf("please enter the quantity\n");
					scanf("%d",&quantity);
				
					total=150*quantity;
					printf("your total quantity price is: %d",total);
					total1=total;
					
				}
				else if(choose==2)
				{
					printf("ok! you have selected salsa chicken pizza \n");
						printf("price of 1 salsa chicken pizza is 100$\n");
					printf("please enter the quantity\n");
					scanf("%d",&quantity);
				
					total=100*quantity;
					printf("your total quantity price is: %d",total);
					total2=total;
				}
				else if(choose==3)
				{
					printf("ok! you have selected chicken cheez pizza\n");
						printf("price of 1 chicken cheez pizza is 80$\n");
					printf("please enter the quantity\n");
					scanf("%d",&quantity);
					total=80*quantity;
					printf("your total total quantity price is: %d",total);
					total3=total;
				}
		   }
		   
		   //pasta condition
		   else if(select==3)
		   {
		   			printf("ok you selected pasta\n");
				
				printf("please select which type of pasta you want\n");
				
				printf("choose 1.chicken mexican pasta  2.  chicken salsa pasta  3.hot chilli chicken pasta\n");
				scanf("%d",&choose);
				
				if(choose==1)
				{
					printf("ok! you have selected chicken mexican pasta\n");
						printf("price of 1 chicken mexican pasta is 50$\n");
					printf("please enter the quantity\n");
					scanf("%d",&quantity);
				
					total=50*quantity;
					printf("your total quantity price is: %d",total);
					total1=total;
					
				}
				else if(choose==2)
				{
					printf("ok! you have selected  chicken salsa pasta \n");
						printf("price of 1 chicken salsa pasta is 75$\n");
					printf("please enter the quantity\n");
					scanf("%d",&quantity);
				
					total=75*quantity;
					printf("your total quantity price is: %d",total);
					total2=total;
				}
				else if(choose==3)
				{
					printf("ok! you have selected hot chilli chicken pasta\n");
						printf("price of 1 hot chilli chicken pasta is 40$\n");
					printf("please enter the quantity\n");
					scanf("%d",&quantity);
				
					total=40*quantity;
					printf("your total quantity price is: %d\n",total);
					total3=total;
				}
		   	
		   	
		   	
		   	
		   }
		
		
	}
	break;
	
case 3:
		
sum=sum+total1+total2+total3;
printf(" your total bill is of %d ruppes\n",sum);
printf("============================================thanks for coming================================================\n");
printf("    =================================we hope you enjoyed your service====================================    ");
exit(1);			
}
printf("\n");
printf("did you want any thing more\n");
}
}
