#include <stdio.h> 
#include <math.h>


#define MAX (5)

main()
{
	int L,a,b,X,Q;
	short int E[MAX];										
	int K[MAX];
	
	
	
	do{
	
		printf("\n");
		printf("1.Parameter\n");
		printf("2.Flaecheninhalt und Winkel berechnen\n");
		printf("3.Programm beenden\n");
		printf("Zum fortfahren bitte zwischen 1-3 wählen\n");
		printf("\n");
		scanf("%c",&L);
		
			
	switch(L) 
	{
	case 49: printf("\n(Parameter) wurde gewählt:\n\n");
					getchar();
					
					for(a,b = 0; a,b < MAX; a++,b++)
					{
					printf("Anzahl der Ecken eingeben:\n");
					scanf("%d",&E[a]);
					
									
					printf("Kantenlänge angeben:\n");
					scanf("%d",&K[b]);					
					printf("\n");
					}
										
					printf("Dies ist die Test anzeige: %d\n",E[0]);
					printf("Dies ist die Test anzeige: %d\n",E[1]);
					printf("Dies ist die Test anzeige: %d\n",E[2]);
					printf("Dies ist die Test anzeige: %d\n",E[3]);
					printf("Dies ist die Test anzeige Ecke: %d\n",E[4]);
					printf("Dies ist die Test anzeige Kanten: %d\n",K[0]);
					printf("Dies ist die Test anzeige: %d\n",K[1]);
					printf("Dies ist die Test anzeige: %d\n",K[2]);
					printf("Dies ist die Test anzeige: %d\n",K[3]);
					printf("Dies ist die Test anzeige: %d\n",K[4]);
					getchar();
					break;
					
					
	case 50: printf("\n(Flächeninhalt und Winkel berechnen) wurde gewählt\n"); 
					
					
					printf("Der Winkel beträgt:%d",Q);	
						
										
				
					
					
					
					
					
					getchar();
					break;
	case 51: printf("\nDasProgramm wurde beendet\n"); 
					getchar(); break;
	default: printf("\n");
	
	}
	}while(L != 51);
		


}





