#include "Struct.h"

void GenererPlateaux(int a_valeur)
{
	//var
	int pl[8][8];
	char ch; 
    FILE* fichier = NULL; 
    fichier = fopen("Exam.txt", "r+"); 

    //creation du plateau 
	system("cls"); 
    fseek(fichier, 0, SEEK_SET);
    fprintf(fichier, "%d\n", a_valeur);
    for (int i = 1; i <= a_valeur; i++)
    {
        for (int j = 1; j <= a_valeur; j++)
        {
            pl[i][j]; 
            //affichage des lettre
            if (j == 1 && i == 1)
            {
                printf("A"); 
                fprintf(fichier, "A"); 
            }
            else if (j == 1 && i == 2)
            {  
                printf("B");
                fprintf(fichier, "B");
            }
            else if (j == 1 && i == 3)
            {
                printf("C");
                fprintf(fichier, "C");
            }
            else if (j == 1 && i == 4)
            {
                printf("D");
                fprintf(fichier, "D");
            }
            else if (j == 1 && i == 5)
            {
                printf("E");
                fprintf(fichier, "E");
            }
            else if (j == 1 && i == 6)
            {
                printf("F");
                fprintf(fichier, "F");
            }
            else if (j == 1 && i == 7)
            {
                printf("G");
                fprintf(fichier, "G");
            }
            else if (j == 1 && i == 8)
            {
                printf("H");
                fprintf(fichier, "H");
            }
            //affichage des casiers 
            if ((i + j) % 2 == 0)
            {
                printf(ANSI_COLOR_WHITE "X" ANSI_COLOR_RESET);
                fprintf(fichier, "X");
            }
            else
            {
                printf(ANSI_COLOR_BLACK "X" ANSI_COLOR_RESET);
                fprintf(fichier, "X");
            }
        }
        printf("\n");
        fprintf(fichier, "\n");
    }
	system("pause"); 
    fclose(fichier); 
}

void Simulation(int a_valeur)
{
    int position = NULL;
    char lettre[1];
    int couleur = NULL; 
    enum pion {
        NONE = 0,
        PAWN,
        ROOK,
        BISHOP,
        KNIGHT,
        QUEEN,
        KING,
    };
    enum pion piece{};

    FILE* fichier = fopen("Exam.txt", "r+");

    //Demmande de la position 
    system("cls");
    printf("Quelle position voulez-vous mettre votre piece\n");
    scanf("%d", &position); 
    printf("Quelle lettre voulez-vous mettre votre piece\n");
    scanf(" %c", lettre);

    //check si le fichier est different de null 
    if (fichier)
    {
        system("cls");
        printf("Choisisser votre piece\n");
        printf("1. Pion\n"); 
        printf("2. Tour\n");
        printf("3. Fou\n");
        printf("4. Cavalier\n");
        printf("5. Reine\n");
        printf("6. Roi\n");
        scanf("%d", &piece);

        //switch case des different pieces 
        switch (piece)
        {
        case NONE:
            break;
        case PAWN:
            system("cls");
            //positionnement du cursor
            fseek(fichier, position, SEEK_SET);
            printf("Choisisser un couleur\n");
            printf("1. blanc\n"); 
            printf("2. Noir\n"); 
            scanf("%d", &couleur); 
                //check la couleur
                if (couleur == 1)
                {
                    fprintf(fichier, "PW");
                    fclose(fichier);
                } 
                else
                {
                    fprintf(fichier, "PB");
                    fclose(fichier);
                }
            break;
        case ROOK:
            system("cls");
            fseek(fichier, position, SEEK_SET);
            printf("Choisisser un couleur\n");
            printf("1. blanc\n");
            printf("2. Noir\n");
            scanf("%d", &couleur);
            if (couleur == 1)
            {
                fprintf(fichier, "RW");
                fclose(fichier);
            }
            else
            {
                fprintf(fichier, "RB");
                fclose(fichier);
            }
            break;
        case BISHOP:
            system("cls");
            fseek(fichier, position, SEEK_SET);
            printf("Choisisser un couleur\n");
            printf("1. blanc\n");
            printf("2. Noir\n");
            scanf("%d", &couleur);
            if (couleur == 1)
            {
                fprintf(fichier, "BW");
                fclose(fichier);
            }
            else
            {
                fprintf(fichier, "BB");
                fclose(fichier);
            }
            break;
        case KNIGHT:
            system("cls");
            fseek(fichier, position, SEEK_SET);
            printf("Choisisser un couleur\n");
            printf("1. blanc\n");
            printf("2. Noir\n");
            scanf("%d", &couleur);
            if (couleur == 1)
            {
                fprintf(fichier, "kW");
                fclose(fichier);
            }
            else
            {
                fprintf(fichier, "kB");
                fclose(fichier);
            }
            break;
        case QUEEN:
            system("cls");
            fseek(fichier, position, SEEK_SET);
            printf("Choisisser un couleur\n");
            printf("1. blanc\n");
            printf("2. Noir\n");
            scanf("%d", &couleur);
            if (couleur == 1)
            {
                fprintf(fichier, "QW");
                fclose(fichier);
            }
            else
            {
                fprintf(fichier, "QB");
                fclose(fichier);
            }
            break;
        case KING:
            system("cls");
            fseek(fichier, position, SEEK_SET);
            printf("Choisisser un couleur\n");
            printf("1. blanc\n");
            printf("2. Noir\n");
            scanf("%d", &couleur);
            if (couleur == 1)
            {
                fprintf(fichier, "KW");
                fclose(fichier);
            }
            else
            {
                fprintf(fichier, "KB");
                fclose(fichier);
            }
            break;
        default:
            break;
        }
    } 
}