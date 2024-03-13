#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{   //1
    char hum;
    printf("Kalwsirthate!\n");
    do
    {  
	   printf("Dwste A gia anhlikos, F gia foithths, E gia enhlikas h H gia hlikiwmenos\n");
       scanf("%c",&hum);
    }
    while (hum!='A' && hum!='F' && hum!='E' && hum!='H');

    //2
    int count;
    printf("Dwste to plhthos twn eisithriwn pou thelete\n");
    scanf("%d",&count);
    while (count<0 || count>4)
    {   printf("Mporeite na parete to polu 4 eisithria\n");
        scanf("%d",&count);
    }

    //3
    char type[8];
    printf("Dialekste tupo eisithriou. Oi tupoi einai 2: Eniaio kai Meiwmeno\n");
    scanf("%s", &type);

    if (hum=='A' || hum=='F' || hum=='H')
    {
        while(strcmp(type,"Meiwmeno")!=0)
        {
            printf("Dikaiouste meiwmeno, dwste thn leksh Meiwmeno\n");
            scanf("%s",type);
        }
    }
    else if (hum=='E')
    {
        while (strcmp(type,"Eniaio")!=0)
        {
            printf("Dikaiouste eniaio, dwste th leksh Eniaio\n");
            scanf("%s",type);
        }
    }
	
	
	//3...ekptwsi
    float price1;
    float price2=0;
    float price3;
    float price4=0;
    float timhmeiwmenou=0.60;
    float timheniaiou=1.40;
    float finalprice;
    
    if (hum=='E')
    {   
		price1=timheniaiou*count;
		finalprice = price1;
        printf("H timh (xwris ekptwsh) einai: %.2f\n",price1);
        if (count==4)
        {   
			price2 = timheniaiou*count - (10.0/100.0)*timheniaiou*count;
            printf("H timh meta thn ekptwsh einai: %.2f\n", price2);
            finalprice = price2;
        }
    }
    else if (hum=='A' || hum=='F' || hum=='H')
    {   price3=timhmeiwmenou*count;
        finalprice = price3;
        printf("H timh(xwris ekptwsh) einai : %.2f\n",price3);
        if (count>=3)
        {   price4=timhmeiwmenou*count-(5.0/100.0)*timhmeiwmenou*count;
            printf("H timh meta thn ekptwsh einai: %.2f\n", price4);
            finalprice = price4;
        }
    }
    
    
    
    //4... emfanizetai ston xrhsth to poso pou prepei na plhrwsei
    if  (hum=='E')
    { if (strcmp(type,"eniaio")==0)
	  {  if (count==4)
         {  printf("To poso pou prepei na plhrwsete einai: %.2f\n ",price2);
         }
         else if (count<4)
         {  printf("To poso pou prepei na plhrwsete einai: %.2f\n",price1);
		 }
       }  
    }  
    
    
     if  (hum=='A' || hum=='F' || hum=='H')
    { if (strcmp(type,"meiwmeno")==0)
	  {  if (count>=3)
         {  printf("To poso pou prepei na plhrwsete einai: %.2f\n ",price4);
            
         }
         else if (count<3)
         {  printf("To poso pou prepei na plhrwsete einai: %.2f\n ",price3);
		 }
       }  
    } 	
    
    //4...
    float sum=0.0;
    float coin;
    float upol;
    int coinint;
	upol = finalprice;
	char word[5];
	float resta=0.0;
		
    while (sum < finalprice)
    {  
    	coin = 0.0;
    	printf("Dwste kermata wste na sumplhrwthei to poso");
	    scanf("%f",&coin);
	    coinint = coin * 100;
	    while (coinint!=1 && coinint!=2 && coinint!=5 && coinint!=10 && coinint!=20 && coinint!=50 && coinint!=100 && coinint!=200)
	    { 
			printf("Lathos kataxwrisi, dwste apodekto kerma");
			scanf("%f",&coin);
			 coinint = coin * 100;
		}
		
		sum = sum + coin;
		upol= finalprice - sum;
		
		
		if (upol > 0.00)
		{	
	       printf("To ypoloipo poso einai %.2f euro\n",upol);
   		}	
   		
       if (upol==0.00)
       {   
           printf("H plhrwmh sas oloklirwthike, dwste OK gia eksodo\n");
           scanf("%s",&word);
           while (strcmp(word, "OK")!=0)
           {  
              printf("H plhrwmh sas oloklirwthike, dwste OK gia eksodo\n");
              scanf("%s",&word);
		   }
	   }
	   
	   if (upol < 0.00)
	   {  
	      resta=-1*(upol);
	      printf("Tha sas dwthoyn resta: %.2f \n",resta );
	   }
   }
    
    
    system("cls");
    
   
    
    printf("Thanks for your purchase!\n");
    printf("Here is the reciept of your purchase: \n");
    printf(" \n");
    printf("*************************************************************************\n");
    printf("Payment Method:CASH\n");
    printf("                        Total tickets bought: %d\n",count);
    
    if (strcmp(type,"Meiwmeno")==0)
    {  printf("                       Fair(per ticket): 0.60 euro\n ");
	}
	else if (strcmp(type,"Eniaio")==0)
	{  printf("                       Fair(per ticket): 1.40 euro\n ");
	}
    
    if  (hum=='A' || hum=='F' || hum=='H')
    {  if (count>=3)
       {  if (strcmp(type,"Meiwmeno")==0)
          { printf("                          Discount: 5%% \n");
	      }
       }
       else if (count<3)
       {  printf("                            Discount: 0%% \n");
	   }
	} 
    else if (hum=='E')
	{  if (count==4)
	    {  if(strcmp(type,"Eniaio")==0)
		   { printf("                         Discount : 10%% \n");
		   }
    	}   
	}   else if (count<4)
	    {  printf("                           Discount: 0%% \n");
	}
	
	
	if  (hum=='A' || hum=='F' || hum=='H')
    {   if (strcmp(type,"Meiwmeno")==0)
        {  printf("                         Total price (before discount): %.2f \n",price3);                    
        }
    }
    else if (hum=='E')
    {   if (strcmp(type,"Eniaio")==0)
        {  printf("                         Total price (before discount): %.2f \n",price1);
		}
	}
	
	
	if  (hum=='A' || hum=='F' || hum=='H')
    {   if (strcmp(type,"Meiwmeno")==0)
        {  printf("                         Final price (after discount): %.2f \n",price4);             
        }
    }
    else if (hum=='E')
    {   if (strcmp(type,"Eniaio")==0)
        {  printf("                        Final price (after discount): %.2f \n",price2);
		}
	}
          
    printf("                       Total euros inserted: %.2f\n",sum);
    printf("                         Total change: %.2f euro\n",resta);
    printf(" \n");
    printf("*************************************************************************\n");
    
    return 0;
    
}
