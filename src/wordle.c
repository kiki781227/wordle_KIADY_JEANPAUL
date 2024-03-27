#include "fonction.c"
#define VERT "\x1b[32m"
#define ROUGE "\x1b[31m"
#define GRIS "\x1b[2m"
#define CLIGNE "\x1b[5m"
#define FIN "\x1b[0m"


int main() 
{
	char tab[NBMOTS][Len_Mot];
	Tab_mots(tab);
	char tab1[Len_Mot];
	strcpy( tab1, tab[RandInt()] );
	char guess[Len_Mot];
	
	int compteur= 0;
	int cmpt_vert=0;

	
	printf("Le mot a trouver commence par la lettre %s. \n", tab1);
	
	while(compteur < 6)
	{	
		if (cmpt_vert== 5)
			break;
		else cmpt_vert=0;
			
		printf("Entrer un mot de 5 lettres: ");
		scanf("%s" , guess );
		printf("\n");			
		
		for(int j=0; j< 5; j++)
		{
			guess[j] = tolower(guess[j]);
			
			if( tab1[j] == guess[j])
			{
				printf(VERT"%c"FIN, toupper(guess[j]) );
				cmpt_vert++;	
			}
			else if(Find_Letter(tab1, guess[j]))
				printf(ROUGE CLIGNE"%c"FIN, toupper(guess[j]) );
				
			else printf(GRIS CLIGNE"%c"FIN, toupper(guess[j]));
			
		}
		printf("\n");
		printf("\n");
		compteur++;
	}
	
	
	if (cmpt_vert==5)
	{
		printf("Vous avez trouver le mot %s ! \n", tab1);
	}
	else printf("Vous n'avez pas trouver le mot. Le mot etait %s . \n", tab1);
	
	return 0;			
}

