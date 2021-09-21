#include <stdio.h>
#include <math.h>

int main(void){
	//defining variables
	float v,i,p,r;
	char equation,type;
	//printing and letting the user choose 
	printf("Enter The Relevenrt Equation r / i / v / p : ");
	scanf("%c", &equation);
	//letting the choose an option
	if ( equation == 'r')
		{
			printf("Enter the Needed Equation f / s / t to find resistance: ");
			scanf("%*c%c",&type);
			
				//letting the choose an equation
				if (type == 'f')
					{
						
						printf("enter value 1 : ");
						scanf("%f",&v);
						
						printf("enter value 2 : ");
						scanf("%f",&i);
						
						r = v / i;
						
						printf("value is : %.2f ",r);
						
					}	
						
				else if (type == 's')
					{
						
						printf("enter value 1 : ");
						scanf("%f",&p);
						
						printf("enter value 2 : ");
						scanf("%f",&i);
						
						r = p / (i*i);

						
						printf("value is : %.2f ",r);
						
					}
					
				else if (type == 't')
					{
						
						printf("enter value 1 : ");
						scanf("%f",&v);
						
						printf("enter value 2 : ");
						scanf("%f",&p);
						
						r = (v * v) / p;

						
						printf("value is : %.2f ",r);
						
					}	
				else 
				{
						printf("error invlid input");
				}		
		}
		
	//////////////////////////////////////////////
		
		
	//letting the choose an option	
	else if ( equation == 'i')
		
		{
			printf("Enter the Needed Equation f / t / h to find Current: ");
			scanf("%*c%c",&type);
			
				//letting the choose an equation
				if (type == 'f')
					{
						
						printf("enter value 1 : ");
						scanf("%f",&v);
						
						printf("enter value 2 : ");
						scanf("%f",&i);
						
						i = v / r;
						
						printf("value is : %.2f ",i);
						
					}	
						
				else if (type == 's')
				
					{
						
						printf("enter value 1 : ");
						scanf("%f",&p);
						
						printf("enter value 2 : ");
						scanf("%f",&r);
						
						i = sqrt(p/r);

						
						printf("value is : %.2f ",i);
						
					}
					
				else if (type == 't')
				
					{
						
						printf("enter value 1 : ");
						scanf("%f",&p);
						
						printf("enter value 2 : ");
						scanf("%f",&v);
						
						i = p/v;

						
						printf("value is : %.2f ",i);
						
					}	
				else 
			
				{
						printf("error invlid input");
				}	
				
			}
		
	
	//////////////////////////////////////////////
	
		//letting the choose an option
		else if ( equation == 'v')
				{
						printf("Enter the Needed Equation f / s / t  to find Voltage: ");
						scanf("%*c%c",&type);
			
						//letting the choose an equation
						if (type == 'f')
						{
						
						printf("enter value 1 : ");
						scanf("%f",&i);
						
						printf("enter value 2 : ");
						scanf("%f",&r);
						
						v = i * r;
						
						printf("value is : %.2f ",v);
						
						}	
						
						else if (type == 's')
				
						{
						
						printf("enter value 1 : ");
						scanf("%f",&p);
						
						printf("enter value 2 : ");
						scanf("%f",&i);
						
						v = p / i;

						
						printf("value is : %.2f ",v);
						
						}
					
				else if (type == 't')
				
					{
						
						printf("enter value 1 : ");
						scanf("%f",&p);
						
						printf("enter value 2 : ");
						scanf("%f",&r);
						
						v = sqrt(p*r);

						
						printf("value is : %.2f ",v);
						
					}	
				else 
			
				{
					printf("error invlid input");
				}
				
	//////////////////////////////////////////////
	
}
		//letting the choose an option
		else if ( equation == 'p')
						{
						printf("Enter the Needed Equation f / s / t  to find Power: ");
						scanf("%*c%c",&type);
			
						//letting the choose an equation
						if (type == 'f')
						{
						
						printf("enter value 1 : ");
						scanf("%f",&i);
						
						printf("enter value 2 : ");
						scanf("%f",&r);
						
						p = pow(i,2) * r;
						
						printf("value is : %.2f ",p);
						
						}	
						
						else if (type == 's')
				
						{
						
						printf("enter value 1 : ");
						scanf("%f",&v);
						
						printf("enter value 2 : ");
						scanf("%f",&i);
						
						p = v * i;

						
						printf("value is : %.2f ",p);
						
						}
					
				else if (type == 't')
				
					{
						
						printf("enter value 1 : ");
						scanf("%f",&v);
						
						printf("enter value 2 : ");
						scanf("%f",&r);
						
						p = pow(v,2)/r;

						
						printf("value is : %.2f ",p);
						
					}	
				else 
			
				{
					printf("error invlid input");
				}
	
	
}

	

	return 0;



}
