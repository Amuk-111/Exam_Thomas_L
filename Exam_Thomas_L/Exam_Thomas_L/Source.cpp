#include "Struct.h"

void main()
{
	//var
	int choix;  
	int valeur;

	//menue
	do
	{
		system("cls");
		printf("1. Generer un tableaux\n");
		printf("2. Simulation de situation\n"); 
		printf("3. Quitter\n"); 
		scanf("%d", &choix); 
		switch (choix)
		{
		case 1:
			printf("Entrer la taille du tableaux\n");
			scanf("%d", &valeur);
			GenererPlateaux(valeur);
			break; 

		case 2: 
			Simulation(valeur);
			break; 

		default: 
			break;
		}

	} while (choix != 3);
}