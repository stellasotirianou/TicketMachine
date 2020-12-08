#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char idiotita ;
	int plithoseis ;
	char eidos[10] ;
	float total ;
	float syn ;
	float poso ;
	char apantisi[4];
	float resta ;
	do 
	{
		printf("Poia einai i idiotita sou? Pata F ean eisai foititis, A ean eisai anilikos,E ean eisai enilikas kai H ean eisai ilikiomenos\n");
		scanf( "%c",&idiotita);
	}
	while (idiotita!='A' && idiotita!='F' && idiotita!='E' && idiotita!='H');
	do 
	 { 
	 printf("Posa eisitiria xreiazeste?(1-4)\n");
	 scanf ("%d",&plithoseis) ;
	 }
	while (plithoseis<1 || plithoseis>4) ;
	if (idiotita=='F' || idiotita=='A' || idiotita=='H')
	{
	 do
	 { printf("Epelekse eidos eisitiriou. Eniaio i Meiwmeno.Pata Eniaio ean eisai ilikiomenos allios pata Meiwmeno\n");
	   scanf ("%s",&eidos);
	 }
	while (strcmp(eidos,"Eniaio")==0);
	total = plithoseis * 0.6 ;
	 if (plithoseis>=3)
	  syn = total - total*5/100 ;
	 else 
	   syn = total ;
    }
	else 
	 {  
	 do 
	  { printf("Epelekse eidos eisitiriou. Eniaio i Meiwmeno.Pata Eniaio ean eisai ilikiomenos, allios pata Meiwmeno\n");
	   scanf ("%s",&eidos);
	  }
	 while (strcmp(eidos,"Meiwmeno")==0);
	 total = plithoseis * 1.4 ;
	 if (plithoseis==4)
	   {
	   syn = total - total*10/100 ;
}
     else 
	 {
	    syn= total;
	}
	 }
     printf("To teliko poso einai %f\n", syn);
     do 
      {          printf("Dose kapoio apo ta kermata twn:\n0.01,0.02,0.05,0.2,0.5 \n1,2 euro\n");

        scanf ("%f" , &poso);
	  }
	  while (poso!=0.01 && poso!=0.02 && poso!=0.05 && poso!=0.1 && poso!=0.2 && poso!=0.5 && poso!=1 && poso!=2);
      printf ("Gia oloklirosi tis pliromis pata OK\n");
    scanf ("%s", apantisi ); 
	if (strcmp(apantisi,"OK")== 0) 
	{ 
	float ipoloipo=0 ;
	  if (poso<total)
	   { 
	    ipoloipo = syn - poso ;
	     
	     do
	    { printf ("Ipoloipontai %.2f\n" , ipoloipo);
		  do 
      {  printf("Dose kapoio apo ta kermata twn:\n0.01,0.02,0.05,0.2,0.5 \n1,2 euro\n");

        scanf ("%f" , &poso); 
	  }
	  while (poso!=0.01 && poso!=0.02 && poso!=0.05 && poso!=0.1 && poso!=0.2 && poso!=0.5 && poso!=1 && poso!=2);
	  ipoloipo = ipoloipo - poso ;
}
while (ipoloipo>0); 
	   }
	  else 
	   
	   resta = poso - syn ;
	   printf ("Tha sas epistrafoun %.2f\n", resta);
	 system("cls");
	 printf ("Thanks for your purchase\n");
	 printf ("Here is the receipt of your purchase\n");
	 printf("\n***********************************************************************\n");
	 printf ("Payment method:CASH\n");
	 printf("\t\t\t\tTotal tickets bought: %d\n", plithoseis);
	 if (eidos=="Meiwmeno")
      { printf ("\t\t\t\tFai(per ticket): 0.60\n");
        if (plithoseis>=3) 
          {
		  printf ("\t\t\t\tDiscount: 5%\n");
      } 
    	}	 
	 else {
	 	printf ("\t\t\t\tFiar (per ticket): 1.40\n");
	 	if (plithoseis==4) 
	 	 {
		    printf ("\t\t\t\tDiscount : 10%\n");
	} 	  
	 }
	   printf("\t\t\t\tTotal Price(before discount): %.2f euro\n", total);
        printf ("\t\t\t\tTotal Price(after discount): %.2f euro\n",syn) ; 
        printf ("\t\t\t\tTotal euros inserted:%.2f euro\n",poso);
        printf ("\t\t\t\tTotal change: %f euro\n", resta);
	}
	return 0;
}
