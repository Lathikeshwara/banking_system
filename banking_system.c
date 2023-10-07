#include<stdio.h>
#include<string.h>
#include<stdlib.h>

  int option(){
  char  choice[34];

	printf("1. balance check\n2.debit\n" );
		printf("enter the choice do you want to select:\n" );
	scanf("%s",choice);
      
  if(strcmp(choice,"1")==0)
	{
		printf("this is bank balance\n");
		return 0;
}
else if(strcmp(choice,"2")==0){

	 printf("this is debit\n");   
		  
		        return 0;
		          
		      }
		      else{
			  
		
			   printf("select the correct option above listed\n");
			   return 1;
			   
	 	}}
 int passvalid(char pass[9])
 {
 	
 	int z=strcmp(pass,"logi");
 	if(z==0)
 	{
 		printf("You login succesfully..\n");
 		return 1;
	 }
	 else
	 {
	 	printf("invalid password,try other password\n");
	 	return 0;
	 }
 }
int main()
{
	
	
	 
	char pass[9];
	

	
int op =option();
	  
	   	int i=0;
	   	for(i;i<5;i++)
	 	{ 
	 	  if(i==4){
			
	           printf("____________sorry this is the wrong");
	           exit(0);
		}
	 		if(op==1 && i==3)
			{
			    	printf("This is the last chance\n");
							  }
		 	if(op==0)
				  break;
		   
	         if(op==1)
	             op=option();
	
	             	
	 
	}
	 	
	printf("enter the password:");
     scanf("%s",&pass);
    
     printf("the password is %s\n ",pass);
     int a= passvalid(pass);
    if(a==0)
    {
    	int i; 
    	for(i=0;i<7;i++)
    	{	
		  if(a==1){
    		break;
		}
		else{
			
		
     	printf("enter the password:");
       scanf("%s",&pass);
             a= passvalid(pass);
       printf("%d status",a);
    		
		}}
		
	}

  return 0;
}
